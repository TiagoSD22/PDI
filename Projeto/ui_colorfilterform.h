/********************************************************************************
** Form generated from reading UI file 'colorfilterform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFILTERFORM_H
#define UI_COLORFILTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_colorfilterForm
{
public:
    QLabel *label;

    void setupUi(QWidget *colorfilterForm)
    {
        if (colorfilterForm->objectName().isEmpty())
            colorfilterForm->setObjectName(QStringLiteral("colorfilterForm"));
        colorfilterForm->resize(737, 300);
        label = new QLabel(colorfilterForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 641, 31));

        retranslateUi(colorfilterForm);

        QMetaObject::connectSlotsByName(colorfilterForm);
    } // setupUi

    void retranslateUi(QWidget *colorfilterForm)
    {
        colorfilterForm->setWindowTitle(QApplication::translate("colorfilterForm", "Form", 0));
        label->setText(QApplication::translate("colorfilterForm", "Filtro de cor predefinido.", 0));
    } // retranslateUi

};

namespace Ui {
    class colorfilterForm: public Ui_colorfilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFILTERFORM_H
