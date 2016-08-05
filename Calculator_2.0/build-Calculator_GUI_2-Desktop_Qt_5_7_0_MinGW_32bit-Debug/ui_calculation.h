/********************************************************************************
** Form generated from reading UI file 'calculation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATION_H
#define UI_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculation
{
public:
    QWidget *widget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculation)
    {
        if (Calculation->objectName().isEmpty())
            Calculation->setObjectName(QStringLiteral("Calculation"));
        Calculation->resize(400, 300);
        widget = new QWidget(Calculation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(false);
        Calculation->setCentralWidget(widget);
        mainToolBar = new QToolBar(Calculation);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calculation->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculation);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculation->setStatusBar(statusBar);

        retranslateUi(Calculation);

        QMetaObject::connectSlotsByName(Calculation);
    } // setupUi

    void retranslateUi(QMainWindow *Calculation)
    {
        Calculation->setWindowTitle(QApplication::translate("Calculation", "\350\256\241\347\256\227\345\231\250", 0));
        mainToolBar->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Calculation: public Ui_Calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H
