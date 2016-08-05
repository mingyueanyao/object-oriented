/********************************************************************************
** Form generated from reading UI file 'fileiodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEIODIALOG_H
#define UI_FILEIODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fileIoDialog
{
public:
    QPushButton *pushButton_input;
    QPushButton *pushButton_output;
    QPushButton *pushButton_configure;
    QPushButton *pushButton_cancle;
    QLineEdit *inputLine;
    QLineEdit *outputLine;
    QLabel *label_input;
    QLabel *label_2;

    void setupUi(QDialog *fileIoDialog)
    {
        if (fileIoDialog->objectName().isEmpty())
            fileIoDialog->setObjectName(QStringLiteral("fileIoDialog"));
        fileIoDialog->resize(500, 250);
        pushButton_input = new QPushButton(fileIoDialog);
        pushButton_input->setObjectName(QStringLiteral("pushButton_input"));
        pushButton_input->setGeometry(QRect(390, 50, 81, 31));
        pushButton_input->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_output = new QPushButton(fileIoDialog);
        pushButton_output->setObjectName(QStringLiteral("pushButton_output"));
        pushButton_output->setGeometry(QRect(390, 120, 81, 31));
        pushButton_output->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_configure = new QPushButton(fileIoDialog);
        pushButton_configure->setObjectName(QStringLiteral("pushButton_configure"));
        pushButton_configure->setGeometry(QRect(70, 180, 81, 31));
        pushButton_configure->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        pushButton_cancle = new QPushButton(fileIoDialog);
        pushButton_cancle->setObjectName(QStringLiteral("pushButton_cancle"));
        pushButton_cancle->setGeometry(QRect(260, 180, 81, 31));
        pushButton_cancle->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        inputLine = new QLineEdit(fileIoDialog);
        inputLine->setObjectName(QStringLiteral("inputLine"));
        inputLine->setGeometry(QRect(20, 50, 351, 31));
        outputLine = new QLineEdit(fileIoDialog);
        outputLine->setObjectName(QStringLiteral("outputLine"));
        outputLine->setGeometry(QRect(20, 120, 351, 31));
        label_input = new QLabel(fileIoDialog);
        label_input->setObjectName(QStringLiteral("label_input"));
        label_input->setGeometry(QRect(20, 20, 81, 31));
        label_input->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));
        label_2 = new QLabel(fileIoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 81, 31));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"04b_21\";"));

        retranslateUi(fileIoDialog);

        QMetaObject::connectSlotsByName(fileIoDialog);
    } // setupUi

    void retranslateUi(QDialog *fileIoDialog)
    {
        fileIoDialog->setWindowTitle(QApplication::translate("fileIoDialog", "Dialog", 0));
        pushButton_input->setText(QApplication::translate("fileIoDialog", "\346\265\217\350\247\210...", 0));
        pushButton_output->setText(QApplication::translate("fileIoDialog", "\346\265\217\350\247\210...", 0));
        pushButton_configure->setText(QApplication::translate("fileIoDialog", "\347\241\256\350\256\244", 0));
        pushButton_cancle->setText(QApplication::translate("fileIoDialog", "\345\217\226\346\266\210", 0));
        label_input->setText(QApplication::translate("fileIoDialog", "\350\276\223\345\205\245\346\226\207\344\273\266\357\274\232", 0));
        label_2->setText(QApplication::translate("fileIoDialog", "\350\276\223\345\207\272\346\226\207\344\273\266\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class fileIoDialog: public Ui_fileIoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEIODIALOG_H
