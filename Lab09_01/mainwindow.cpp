#include "mainwindow.h"
#include "ui_mainwindow.h"

#define name L"\\\\.\\Pipe\\asdr"

std::vector<std::string> arrayOfThoughts = {"Go to shop", "Go home", "Skip first lecture", "Attend lessond",
                                         "Read a book", "Play a guitar", "Do homework", "Get ready for exam", "Go to sleep", "Pass a topic"};
int id;
MainWindow::MainWindow(int param, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    id = param;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString tmp = ui->plainTextEdit->toPlainText();

    int bestIdea = ui->bestIdeaLineEdit->text().toInt();

    HANDLE handle = CreateNamedPipe(name,
        PIPE_ACCESS_DUPLEX,
        PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
        1,
        0,
        0,
        100,
        NULL);

    if (!handle)
    {
        ui->plainTextEdit->setPlainText( "Error #1");
        return;
    }
    if (ConnectNamedPipe(handle, NULL)) std::cout << "Conection good!";
    else
    {
          ui->plainTextEdit->setPlainText("Error #2");
        return;
    }

    std::string str = "Developer number " + std::to_string(id+1)+" voted for idea number " +std::to_string(bestIdea);

    ui->bestIdeaLineEdit->setText(QString::fromStdString(str));

    DWORD bytesWritten;
    WriteFile(handle,
        str.c_str(),
        100,
        &bytesWritten,
        NULL);
    DisconnectNamedPipe(handle);
    CloseHandle(handle);
    delete ui;
}


void MainWindow::on_createIdeasPushButtob_clicked()
{
    std::string outPut = "\n\nDeveloper " + std::to_string(id+1) + " - List of thoughts:\n";
    const int TIME = 6000;
    //Sleep(TIME);
    srand ( time(NULL) );
    for(int i=0;i<TIME/2000;i++)
    {

        outPut += "\n    "+std::to_string(i+1+(TIME/2000)*id)+" - " + arrayOfThoughts[rand()%10];
    }
    ui->voatingResultPlainTextEdit->setPlainText(QString::fromStdString(outPut));



        HANDLE hFileMap;
        BOOL bResult;
        PCHAR lpBuffer = NULL;
        char Buffer[1024] = "WASSUP!";
        size_t szBuffer = sizeof (Buffer);

        hFileMap = OpenFileMapping(
                    FILE_MAP_ALL_ACCESS,
                    FALSE,
                    L"Local\\MyFileMap");
        if (!hFileMap)
        {
             ui->plainTextEdit->setPlainText("Error #1");
            return;
        }
        lpBuffer = (PCHAR)MapViewOfFile(
            hFileMap,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            256
        );
        if (!lpBuffer)
        {
             ui->plainTextEdit->setPlainText("Error #2");
            return;
        }

        //CopyMemory(lpBuffer, "", szBuffer);
        std::string str =  lpBuffer;
        str += outPut;

        CopyMemory(lpBuffer, str.c_str(), szBuffer);

        bResult = UnmapViewOfFile(lpBuffer);
        if (!bResult)
        {
             ui->plainTextEdit->setPlainText("Error #3");
            return;
        }
}

