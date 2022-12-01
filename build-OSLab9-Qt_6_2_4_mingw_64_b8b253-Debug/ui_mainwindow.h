/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *infoPlainTextEdit;
    QPushButton *createProcessButton;
    QComboBox *processCountComboBox;
    QPushButton *createIdeasPushButton;
    QPushButton *startVoatingButton;
    QPlainTextEdit *voatingResultPlainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(694, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        infoPlainTextEdit = new QPlainTextEdit(centralwidget);
        infoPlainTextEdit->setObjectName(QString::fromUtf8("infoPlainTextEdit"));
        infoPlainTextEdit->setGeometry(QRect(10, 90, 321, 321));
        QFont font;
        font.setPointSize(16);
        infoPlainTextEdit->setFont(font);
        infoPlainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        createProcessButton = new QPushButton(centralwidget);
        createProcessButton->setObjectName(QString::fromUtf8("createProcessButton"));
        createProcessButton->setGeometry(QRect(350, 280, 331, 61));
        createProcessButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: #0095ff;\n"
" border-radius: 12px;\n"
"  border-style: none;\n"
"  box-shadow: rgba(255, 255, 255, .4) 0 1px 0 0 inset;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",\"Liberation Sans\",sans-serif;\n"
"  font-size: 20px;\n"
"  font-weight: 500;\n"
"  line-height: 1.15385;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 8px .8em;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: baseline;\n"
"  white-space: nowrap;\n"
"}\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:focus {\n"
"  background-color: #07c;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  box-shadow: 0 0 0 4px rgba(0, 149, 255, .15);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #0064bd;\n"
"  box-shadow: none;\n"
"}"));
        processCountComboBox = new QComboBox(centralwidget);
        processCountComboBox->addItem(QString());
        processCountComboBox->addItem(QString());
        processCountComboBox->addItem(QString());
        processCountComboBox->addItem(QString());
        processCountComboBox->addItem(QString());
        processCountComboBox->setObjectName(QString::fromUtf8("processCountComboBox"));
        processCountComboBox->setGeometry(QRect(590, 230, 91, 41));
        processCountComboBox->setFont(font);
        processCountComboBox->setStyleSheet(QString::fromUtf8("\n"
"  border: 2px solid blue;;\n"
"  border-radius: 8px;\n"
""));
        createIdeasPushButton = new QPushButton(centralwidget);
        createIdeasPushButton->setObjectName(QString::fromUtf8("createIdeasPushButton"));
        createIdeasPushButton->setGeometry(QRect(350, 350, 151, 61));
        createIdeasPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: #0095ff;\n"
" border-radius: 12px;\n"
"  border-style: none;\n"
"  box-shadow: rgba(255, 255, 255, .4) 0 1px 0 0 inset;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",\"Liberation Sans\",sans-serif;\n"
"  font-size: 20px;\n"
"  font-weight: 500;\n"
"  line-height: 1.15385;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 8px .8em;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: baseline;\n"
"  white-space: nowrap;\n"
"}\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:focus {\n"
"  background-color: #07c;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  box-shadow: 0 0 0 4px rgba(0, 149, 255, .15);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #0064bd;\n"
"  box-shadow: none;\n"
"}"));
        startVoatingButton = new QPushButton(centralwidget);
        startVoatingButton->setObjectName(QString::fromUtf8("startVoatingButton"));
        startVoatingButton->setGeometry(QRect(510, 350, 171, 61));
        startVoatingButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: #0095ff;\n"
" border-radius: 12px;\n"
"  border-style: none;\n"
"  box-shadow: rgba(255, 255, 255, .4) 0 1px 0 0 inset;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",\"Liberation Sans\",sans-serif;\n"
"  font-size: 20px;\n"
"  font-weight: 500;\n"
"  line-height: 1.15385;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 8px .8em;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: baseline;\n"
"  white-space: nowrap;\n"
"}\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:focus {\n"
"  background-color: #07c;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  box-shadow: 0 0 0 4px rgba(0, 149, 255, .15);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #0064bd;\n"
"  box-shadow: none;\n"
"}"));
        voatingResultPlainTextEdit = new QPlainTextEdit(centralwidget);
        voatingResultPlainTextEdit->setObjectName(QString::fromUtf8("voatingResultPlainTextEdit"));
        voatingResultPlainTextEdit->setGeometry(QRect(350, 90, 331, 121));
        voatingResultPlainTextEdit->setFont(font);
        voatingResultPlainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 321, 81));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 230, 231, 41));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 0, 331, 81));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 694, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        createProcessButton->setText(QCoreApplication::translate("MainWindow", "Create Process", nullptr));
        processCountComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        processCountComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        processCountComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "4", nullptr));
        processCountComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));
        processCountComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "16", nullptr));

        createIdeasPushButton->setText(QCoreApplication::translate("MainWindow", "Show Ideas", nullptr));
        startVoatingButton->setText(QCoreApplication::translate("MainWindow", "Voting", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Virtual \320\222lackboard:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Choose number of processes:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Results of Voting:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
