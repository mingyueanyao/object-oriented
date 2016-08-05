/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_escape;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_division;
    QPushButton *pushButton_0;
    QPushButton *pushButton_pointer;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_equal;
    QLabel *inputLabel;
    QPushButton *pushButton_file;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(375, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMaximumSize(QSize(16777215, 16777215));
        Calculator->setFocusPolicy(Qt::StrongFocus);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 50, 41, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 50, 41, 31));
        pushButton_backspace = new QPushButton(centralwidget);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        pushButton_backspace->setGeometry(QRect(320, 90, 41, 31));
        pushButton_backspace->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        pushButton_escape = new QPushButton(centralwidget);
        pushButton_escape->setObjectName(QStringLiteral("pushButton_escape"));
        pushButton_escape->setGeometry(QRect(320, 50, 41, 31));
        pushButton_escape->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 50, 41, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 90, 41, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 90, 41, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 90, 41, 31));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(200, 90, 41, 71));
        pushButton_plus->setStyleSheet(QStringLiteral(""));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(260, 50, 41, 31));
        pushButton_multiply->setStyleSheet(QStringLiteral(""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 130, 41, 31));
        pushButton_1->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 130, 41, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 130, 41, 31));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(200, 50, 41, 31));
        pushButton_minus->setStyleSheet(QStringLiteral(""));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName(QStringLiteral("pushButton_division"));
        pushButton_division->setGeometry(QRect(260, 90, 41, 31));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 170, 41, 31));
        pushButton_pointer = new QPushButton(centralwidget);
        pushButton_pointer->setObjectName(QStringLiteral("pushButton_pointer"));
        pushButton_pointer->setGeometry(QRect(80, 170, 41, 31));
        pushButton_pointer->setStyleSheet(QStringLiteral("font: 75 9pt \"04b_21\";"));
        pushButton_left = new QPushButton(centralwidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(140, 170, 41, 31));
        pushButton_right = new QPushButton(centralwidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(200, 170, 41, 31));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(260, 170, 101, 31));
        pushButton_equal->setStyleSheet(QLatin1String("font: 75 9pt \"04b_21\";\n"
"color: rgb(255, 170, 127);\n"
""));
        inputLabel = new QLabel(centralwidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setGeometry(QRect(20, 10, 341, 31));
        inputLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"font: 87 14pt \"Arial Black\";"));
        pushButton_file = new QPushButton(centralwidget);
        pushButton_file->setObjectName(QStringLiteral("pushButton_file"));
        pushButton_file->setGeometry(QRect(260, 130, 101, 31));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 375, 23));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "\350\256\241\347\256\227\345\231\250", 0));
        pushButton_7->setText(QApplication::translate("Calculator", "7", 0));
        pushButton_8->setText(QApplication::translate("Calculator", "8", 0));
        pushButton_backspace->setText(QApplication::translate("Calculator", "\342\206\220", 0));
        pushButton_escape->setText(QApplication::translate("Calculator", "ESC", 0));
        pushButton_9->setText(QApplication::translate("Calculator", "9", 0));
        pushButton_4->setText(QApplication::translate("Calculator", "4", 0));
        pushButton_5->setText(QApplication::translate("Calculator", "5", 0));
        pushButton_6->setText(QApplication::translate("Calculator", "6", 0));
        pushButton_plus->setText(QApplication::translate("Calculator", "+", 0));
        pushButton_multiply->setText(QApplication::translate("Calculator", "\303\227", 0));
        pushButton_1->setText(QApplication::translate("Calculator", "1", 0));
        pushButton_2->setText(QApplication::translate("Calculator", "2", 0));
        pushButton_3->setText(QApplication::translate("Calculator", "3", 0));
        pushButton_minus->setText(QApplication::translate("Calculator", "-", 0));
        pushButton_division->setText(QApplication::translate("Calculator", "\303\267", 0));
        pushButton_0->setText(QApplication::translate("Calculator", "0", 0));
        pushButton_pointer->setText(QApplication::translate("Calculator", ".", 0));
        pushButton_left->setText(QApplication::translate("Calculator", "(", 0));
        pushButton_right->setText(QApplication::translate("Calculator", ")", 0));
        pushButton_equal->setText(QApplication::translate("Calculator", "=", 0));
        inputLabel->setText(QString());
        pushButton_file->setText(QApplication::translate("Calculator", "\346\211\271\351\207\217\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
