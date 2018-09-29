/********************************************************************************
** Form generated from reading UI file 'pixelateform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXELATEFORM_H
#define UI_PIXELATEFORM_H

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

class Ui_pixelateForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *inputmaximoFormMaskSize_2;
    QSpinBox *inputpixelateFormMaskSize;
    QLabel *label;

    void setupUi(QWidget *pixelateForm)
    {
        if (pixelateForm->objectName().isEmpty())
            pixelateForm->setObjectName(QStringLiteral("pixelateForm"));
        pixelateForm->resize(752, 300);
        horizontalLayoutWidget = new QWidget(pixelateForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 80, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inputmaximoFormMaskSize_2 = new QLabel(horizontalLayoutWidget);
        inputmaximoFormMaskSize_2->setObjectName(QStringLiteral("inputmaximoFormMaskSize_2"));

        horizontalLayout->addWidget(inputmaximoFormMaskSize_2);

        inputpixelateFormMaskSize = new QSpinBox(horizontalLayoutWidget);
        inputpixelateFormMaskSize->setObjectName(QStringLiteral("inputpixelateFormMaskSize"));
        inputpixelateFormMaskSize->setMinimum(3);
        inputpixelateFormMaskSize->setMaximum(99);

        horizontalLayout->addWidget(inputpixelateFormMaskSize);

        label = new QLabel(pixelateForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 20, 671, 31));

        retranslateUi(pixelateForm);

        QMetaObject::connectSlotsByName(pixelateForm);
    } // setupUi

    void retranslateUi(QWidget *pixelateForm)
    {
        pixelateForm->setWindowTitle(QApplication::translate("pixelateForm", "Form", 0));
        inputmaximoFormMaskSize_2->setText(QApplication::translate("pixelateForm", "Tamanho dos Blocos", 0));
        label->setText(QApplication::translate("pixelateForm", "<html><head/><body><p>Esta fun\303\247\303\243o distor\303\247e a imagem agrupando seus pixels em blocos.Controle o efeito definindo o <span style=\" font-weight:600;\">Tamanho do Blocos</span>.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class pixelateForm: public Ui_pixelateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXELATEFORM_H
