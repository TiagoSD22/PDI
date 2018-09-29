/********************************************************************************
** Form generated from reading UI file 'bitplaneform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITPLANEFORM_H
#define UI_BITPLANEFORM_H

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

class Ui_bitplaneForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *inputbitplaneFormPlano;
    QLabel *label_2;

    void setupUi(QWidget *bitplaneForm)
    {
        if (bitplaneForm->objectName().isEmpty())
            bitplaneForm->setObjectName(QStringLiteral("bitplaneForm"));
        bitplaneForm->resize(716, 300);
        horizontalLayoutWidget = new QWidget(bitplaneForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 90, 321, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputbitplaneFormPlano = new QSpinBox(horizontalLayoutWidget);
        inputbitplaneFormPlano->setObjectName(QStringLiteral("inputbitplaneFormPlano"));
        inputbitplaneFormPlano->setMaximum(7);

        horizontalLayout->addWidget(inputbitplaneFormPlano);

        label_2 = new QLabel(bitplaneForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(16, 20, 671, 31));

        retranslateUi(bitplaneForm);

        QMetaObject::connectSlotsByName(bitplaneForm);
    } // setupUi

    void retranslateUi(QWidget *bitplaneForm)
    {
        bitplaneForm->setWindowTitle(QApplication::translate("bitplaneForm", "Form", 0));
        label->setText(QApplication::translate("bitplaneForm", "Plano de Bits", 0));
        label_2->setText(QApplication::translate("bitplaneForm", "Esta fun\303\247\303\243o extrai um plano de Bits. Selecione qual plano voc\303\252 deseja extrair. Os valores podem variar de 0 a 7.", 0));
    } // retranslateUi

};

namespace Ui {
    class bitplaneForm: public Ui_bitplaneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITPLANEFORM_H
