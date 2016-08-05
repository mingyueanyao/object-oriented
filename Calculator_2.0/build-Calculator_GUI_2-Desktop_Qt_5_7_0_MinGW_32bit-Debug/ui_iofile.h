/********************************************************************************
** Form generated from reading UI file 'iofile.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOFILE_H
#define UI_IOFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ioFile
{
public:
    QWidget *centralwidget;
    QLineEdit *inputLine;
    QLineEdit *outputLine;
    QPushButton *pushButton_input;
    QPushButton *pushButton_output;
    QLabel *label_1;
    QLabel *label_2;
    QPushButton *pushButton_confingure;
    QPushButton *pushButton_cancle;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ioFile)
    {
        if (ioFile->objectName().isEmpty())
            ioFile->setObjectName(QStringLiteral("ioFile"));
        ioFile->resize(460, 250);
        centralwidget = new QWidget(ioFile);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        inputLine = new QLineEdit(centralwidget);
        inputLine->setObjectName(QStringLiteral("inputLine"));
        inputLine->setGeometry(QRect(20, 40, 331, 31));
        outputLine = new QLineEdit(centralwidget);
        outputLine->setObjectName(QStringLiteral("outputLine"));
        outputLine->setGeometry(QRect(20, 110, 331, 31));
        pushButton_input = new QPushButton(centralwidget);
        pushButton_input->setObjectName(QStringLiteral("pushButton_input"));
        pushButton_input->setGeometry(QRect(370, 40, 75, 31));
        pushButton_input->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_output = new QPushButton(centralwidget);
        pushButton_output->setObjectName(QStringLiteral("pushButton_output"));
        pushButton_output->setGeometry(QRect(370, 110, 75, 31));
        pushButton_output->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(20, 10, 81, 21));
        label_1->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 31));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_confingure = new QPushButton(centralwidget);
        pushButton_confingure->setObjectName(QStringLiteral("pushButton_confingure"));
        pushButton_confingure->setGeometry(QRect(80, 160, 75, 31));
        pushButton_confingure->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_cancle = new QPushButton(centralwidget);
        pushButton_cancle->setObjectName(QStringLiteral("pushButton_cancle"));
        pushButton_cancle->setGeometry(QRect(260, 160, 75, 31));
        pushButton_cancle->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        ioFile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ioFile);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 23));
        ioFile->setMenuBar(menubar);
        statusbar = new QStatusBar(ioFile);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ioFile->setStatusBar(statusbar);

        retranslateUi(ioFile);

        QMetaObject::connectSlotsByName(ioFile);
    } // setupUi

    void retranslateUi(QMainWindow *ioFile)
    {
        ioFile->setWindowTitle(QApplication::translate("ioFile", "MainWindow", 0));
        pushButton_input->setText(QApplication::translate("ioFile", "\346\265\217\350\247\210...", 0));
        pushButton_output->setText(QApplication::translate("ioFile", "\346\265\217\350\247\210...", 0));
        label_1->setText(QApplication::translate("ioFile", "\350\276\223\345\205\245\346\226\207\344\273\266\357\274\232", 0));
        label_2->setText(QApplication::translate("ioFile", "\350\276\223\345\207\272\346\226\207\344\273\266\357\274\232", 0));
        pushButton_confingure->setText(QApplication::translate("ioFile", "\347\241\256\350\256\244", 0));
        pushButton_cancle->setText(QApplication::translate("ioFile", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class ioFile: public Ui_ioFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOFILE_H
