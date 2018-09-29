/********************************************************************************
** Form generated from reading UI file 'rainbowform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAINBOWFORM_H
#define UI_RAINBOWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rainbowForm
{
public:
    QLabel *label;

    void setupUi(QWidget *rainbowForm)
    {
        if (rainbowForm->objectName().isEmpty())
            rainbowForm->setObjectName(QStringLiteral("rainbowForm"));
        rainbowForm->resize(778, 342);
        label = new QLabel(rainbowForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 461, 31));

        retranslateUi(rainbowForm);

        QMetaObject::connectSlotsByName(rainbowForm);
    } // setupUi

    void retranslateUi(QWidget *rainbowForm)
    {
        rainbowForm->setWindowTitle(QApplication::translate("rainbowForm", "Form", 0));
        label->setText(QApplication::translate("rainbowForm", "\"Rainbownize-se\".", 0));
    } // retranslateUi

};

namespace Ui {
    class rainbowForm: public Ui_rainbowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAINBOWFORM_H
