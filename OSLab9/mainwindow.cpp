#include "mainwindow.h"
#include "ui_mainwindow.h"

#define name L"\\\\.\\Pipe\\asdr"

HANDLE hFileMap;
std::string resultOfSurvey = "";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

std::wstring stringToWString(int a)
{
    std::string s = std::to_string(a);
    std::wstring temp(s.length(),L' ');
    std::copy(s.begin(), s.end(), temp.begin());
    return temp;
}


void MainWindow::on_createProcessButton_clicked()
{
    int countOfProcess = ui->processCountComboBox->currentText().toInt();
    std::string pipeData;
    DWORD bytesRead;

    for(int i=0;i<countOfProcess;i++)
    {
        STARTUPINFO si;
        PROCESS_INFORMATION pi;
        ZeroMemory(&si, sizeof(STARTUPINFO));
        std::wstring CommandLineOne(L"D://QTReal//Apps//build-Lab09_01-Qt_6_2_4_mingw_64_a9d8f5-Release//release//Lab09_01.exe "+stringToWString(i));
        if(!CreateProcess(
                    NULL,
                    &CommandLineOne[0],
                    NULL,
                    NULL,
                    FALSE,
                    NULL,
                    NULL,
                    NULL,
                    &si,
                    &pi))ui->infoPlainTextEdit->setPlainText("Error");

    }


    hFileMap = CreateFileMapping(
        INVALID_HANDLE_VALUE,
        NULL,
        PAGE_READWRITE,
        0,
        256,
        L"Local\\MyFileMap"
    );
}


void MainWindow::on_createIdeasPushButton_clicked()
{

        BOOL bResult;
        PCHAR lpBuffer = NULL;

        if (!hFileMap)
        {
           ui->infoPlainTextEdit->setPlainText("Error #1");
            return;
        }

        lpBuffer = (PCHAR)MapViewOfFile(
            hFileMap,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            256);

        if (!lpBuffer)
        {
           ui->infoPlainTextEdit->setPlainText("Error #2");
            return;
        }
       ui->infoPlainTextEdit->appendPlainText(lpBuffer);

        bResult = UnmapViewOfFile(lpBuffer);
        if (!bResult)
        {
           ui->infoPlainTextEdit->setPlainText("Error #3");
            return;
        }

        CloseHandle(hFileMap);

        return;
}


void MainWindow::on_startVoatingButton_clicked()
{

    if (!WaitNamedPipe(name, NMPWAIT_WAIT_FOREVER))
    {
        ui->infoPlainTextEdit->setPlainText( "Error #1");
        return;
    }
    HANDLE handle = CreateFile(
        name,
        GENERIC_READ | GENERIC_WRITE,
        FALSE,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);

    if (!handle)
    {
         ui->infoPlainTextEdit->setPlainText("Error #2");
        return;
    }


    char* msg = new char[100];
    DWORD bytesRead;

    ReadFile(handle, msg, 100, &bytesRead, NULL);

    resultOfSurvey += msg ;
    resultOfSurvey += "\n";
    ui->startVoatingButton->setText("Next dev");

    ui->voatingResultPlainTextEdit->setPlainText(QString::fromStdString(resultOfSurvey));
    CloseHandle(handle);
    return;


}

