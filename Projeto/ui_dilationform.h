/********************************************************************************
** Form generated from reading UI file 'dilationform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DILATIONFORM_H
#define UI_DILATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DilationForm
{
public:
    QLabel *displayDilationFormMessage;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *displayMaskSizeDilationForm;
    QSpinBox *inputMaskSizeDilationForm;

    void setupUi(QWidget *DilationForm)
    {
        if (DilationForm->objectName().isEmpty())
            DilationForm->setObjectName(QStringLiteral("DilationForm"));
        DilationForm->resize(400, 300);
        displayDilationFormMessage = new QLabel(DilationForm);
        displayDilationFormMessage->setObjectName(QStringLiteral("displayDilationFormMessage"));
        displayDilationFormMessage->setGeometry(QRect(110, 10, 161, 17));
        widget = new QWidget(DilationForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 130, 122, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        displayMaskSizeDilationForm = new QLabel(widget);
        displayMaskSizeDilationForm->setObjectName(QStringLiteral("displayMaskSizeDilationForm"));

        horizontalLayout->addWidget(displayMaskSizeDilationForm);

        inputMaskSizeDilationForm = new QSpinBox(widget);
        inputMaskSizeDilationForm->setObjectName(QStringLiteral("inputMaskSizeDilationForm"));
        inputMaskSizeDilationForm->setMinimum(3);
        inputMaskSizeDilationForm->setMaximum(9);

        horizontalLayout->addWidget(inputMaskSizeDilationForm);


        retranslateUi(DilationForm);

        QMetaObject::connectSlotsByName(DilationForm);
    } // setupUi

    void retranslateUi(QWidget *DilationForm)
    {
        DilationForm->setWindowTitle(QApplication::translate("DilationForm", "Form", 0));
        displayDilationFormMessage->setText(QApplication::translate("DilationForm", "Dilation Filter Options", 0));
        displayMaskSizeDilationForm->setText(QApplication::translate("DilationForm", "Mask Size", 0));
    } // retranslateUi

};

namespace Ui {
    class DilationForm: public Ui_DilationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DILATIONFORM_H
