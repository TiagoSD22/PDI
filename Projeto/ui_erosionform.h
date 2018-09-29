/********************************************************************************
** Form generated from reading UI file 'erosionform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EROSIONFORM_H
#define UI_EROSIONFORM_H

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

class Ui_ErosionForm
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMaskSizeErosionForm;
    QSpinBox *inputErosionFormMaskSize;
    QLabel *label;

    void setupUi(QWidget *ErosionForm)
    {
        if (ErosionForm->objectName().isEmpty())
            ErosionForm->setObjectName(QStringLiteral("ErosionForm"));
        ErosionForm->resize(681, 300);
        layoutWidget = new QWidget(ErosionForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 130, 153, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelMaskSizeErosionForm = new QLabel(layoutWidget);
        labelMaskSizeErosionForm->setObjectName(QStringLiteral("labelMaskSizeErosionForm"));

        horizontalLayout->addWidget(labelMaskSizeErosionForm);

        inputErosionFormMaskSize = new QSpinBox(layoutWidget);
        inputErosionFormMaskSize->setObjectName(QStringLiteral("inputErosionFormMaskSize"));
        inputErosionFormMaskSize->setMinimum(3);

        horizontalLayout->addWidget(inputErosionFormMaskSize);

        label = new QLabel(ErosionForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 521, 31));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);

        retranslateUi(ErosionForm);

        QMetaObject::connectSlotsByName(ErosionForm);
    } // setupUi

    void retranslateUi(QWidget *ErosionForm)
    {
        ErosionForm->setWindowTitle(QApplication::translate("ErosionForm", "Form", 0));
        labelMaskSizeErosionForm->setText(QApplication::translate("ErosionForm", "Tamanho da M\303\241scara", 0));
        label->setText(QApplication::translate("ErosionForm", "Esta fun\303\247\303\243o erode a imagem,aplicando a cada pixel a intensidade m\303\255nima encontrada em sua vizinhan\303\247a. \n"
"Defina o tamanho da vizinhan\303\247a a ser utilizada a partir do Tamanho da M\303\241scara.", 0));
    } // retranslateUi

};

namespace Ui {
    class ErosionForm: public Ui_ErosionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EROSIONFORM_H
