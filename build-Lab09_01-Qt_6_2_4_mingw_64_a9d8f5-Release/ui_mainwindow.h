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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QPushButton *createIdeasPushButtob;
    QLineEdit *bestIdeaLineEdit;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *voatingResultPlainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(359, 676);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 80, 341, 241));
        QFont font;
        font.setPointSize(16);
        plainTextEdit->setFont(font);
        plainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 460, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
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
        createIdeasPushButtob = new QPushButton(centralwidget);
        createIdeasPushButtob->setObjectName(QString::fromUtf8("createIdeasPushButtob"));
        createIdeasPushButtob->setGeometry(QRect(10, 330, 341, 61));
        createIdeasPushButtob->setStyleSheet(QString::fromUtf8("\n"
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
        bestIdeaLineEdit = new QLineEdit(centralwidget);
        bestIdeaLineEdit->setObjectName(QString::fromUtf8("bestIdeaLineEdit"));
        bestIdeaLineEdit->setGeometry(QRect(220, 400, 131, 51));
        bestIdeaLineEdit->setFont(font);
        bestIdeaLineEdit->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 341, 51));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 400, 201, 101));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        voatingResultPlainTextEdit = new QPlainTextEdit(centralwidget);
        voatingResultPlainTextEdit->setObjectName(QString::fromUtf8("voatingResultPlainTextEdit"));
        voatingResultPlainTextEdit->setGeometry(QRect(10, 510, 341, 121));
        voatingResultPlainTextEdit->setFont(font);
        voatingResultPlainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"  border: 4px solid blue;;\n"
"  border-radius: 12px;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 359, 20));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Vote", nullptr));
        createIdeasPushButtob->setText(QCoreApplication::translate("MainWindow", "Create Ideas", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ideas:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "For Voting\n"
"Enter Number of\n"
"Best Ideas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
