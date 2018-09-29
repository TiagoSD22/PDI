/********************************************************************************
** Form generated from reading UI file 'resizebliform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEBLIFORM_H
#define UI_RESIZEBLIFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResizeBLIForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *inputScaleXResizeBLIForm;
    QLabel *label_2;
    QDoubleSpinBox *inputScaleYResizeBLIForm;
    QLabel *label_3;
    QRadioButton *opcao;

    void setupUi(QWidget *ResizeBLIForm)
    {
        if (ResizeBLIForm->objectName().isEmpty())
            ResizeBLIForm->setObjectName(QStringLiteral("ResizeBLIForm"));
        ResizeBLIForm->resize(444, 300);
        horizontalLayoutWidget = new QWidget(ResizeBLIForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 130, 296, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputScaleXResizeBLIForm = new QDoubleSpinBox(horizontalLayoutWidget);
        inputScaleXResizeBLIForm->setObjectName(QStringLiteral("inputScaleXResizeBLIForm"));
        inputScaleXResizeBLIForm->setMinimum(0.1);
        inputScaleXResizeBLIForm->setMaximum(10);
        inputScaleXResizeBLIForm->setSingleStep(0.1);
        inputScaleXResizeBLIForm->setValue(1);

        horizontalLayout->addWidget(inputScaleXResizeBLIForm);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputScaleYResizeBLIForm = new QDoubleSpinBox(horizontalLayoutWidget);
        inputScaleYResizeBLIForm->setObjectName(QStringLiteral("inputScaleYResizeBLIForm"));
        inputScaleYResizeBLIForm->setMinimum(0.1);
        inputScaleYResizeBLIForm->setMaximum(10);
        inputScaleYResizeBLIForm->setSingleStep(0.1);
        inputScaleYResizeBLIForm->setValue(1);

        horizontalLayout->addWidget(inputScaleYResizeBLIForm);

        label_3 = new QLabel(ResizeBLIForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 371, 51));
        opcao = new QRadioButton(ResizeBLIForm);
        opcao->setObjectName(QStringLiteral("opcao"));
        opcao->setGeometry(QRect(320, 160, 121, 17));
        opcao->setChecked(false);
        opcao->setAutoRepeat(false);
        opcao->setAutoExclusive(false);

        retranslateUi(ResizeBLIForm);

        QMetaObject::connectSlotsByName(ResizeBLIForm);
    } // setupUi

    void retranslateUi(QWidget *ResizeBLIForm)
    {
        ResizeBLIForm->setWindowTitle(QApplication::translate("ResizeBLIForm", "Form", 0));
        label->setText(QApplication::translate("ResizeBLIForm", "Escalar Lagura em", 0));
        label_2->setText(QApplication::translate("ResizeBLIForm", "Escalar Altura em", 0));
        label_3->setText(QApplication::translate("ResizeBLIForm", "Esta fun\303\247\303\243o reescala a imagem pelo fator selecionado. ", 0));
        opcao->setText(QApplication::translate("ResizeBLIForm", "Manter Propor\303\247\303\243o", 0));
    } // retranslateUi

};

namespace Ui {
    class ResizeBLIForm: public Ui_ResizeBLIForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEBLIFORM_H
