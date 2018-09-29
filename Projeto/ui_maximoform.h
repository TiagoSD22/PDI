/********************************************************************************
** Form generated from reading UI file 'maximoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAXIMOFORM_H
#define UI_MAXIMOFORM_H

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

class Ui_maximoForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *inputmaximoFormMaskSize_2;
    QSpinBox *inputmaximoFormMaskSize;
    QLabel *label;

    void setupUi(QWidget *maximoForm)
    {
        if (maximoForm->objectName().isEmpty())
            maximoForm->setObjectName(QStringLiteral("maximoForm"));
        maximoForm->resize(752, 300);
        horizontalLayoutWidget = new QWidget(maximoForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 80, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inputmaximoFormMaskSize_2 = new QLabel(horizontalLayoutWidget);
        inputmaximoFormMaskSize_2->setObjectName(QStringLiteral("inputmaximoFormMaskSize_2"));

        horizontalLayout->addWidget(inputmaximoFormMaskSize_2);

        inputmaximoFormMaskSize = new QSpinBox(horizontalLayoutWidget);
        inputmaximoFormMaskSize->setObjectName(QStringLiteral("inputmaximoFormMaskSize"));
        inputmaximoFormMaskSize->setMinimum(3);
        inputmaximoFormMaskSize->setMaximum(99);

        horizontalLayout->addWidget(inputmaximoFormMaskSize);

        label = new QLabel(maximoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 20, 671, 31));

        retranslateUi(maximoForm);

        QMetaObject::connectSlotsByName(maximoForm);
    } // setupUi

    void retranslateUi(QWidget *maximoForm)
    {
        maximoForm->setWindowTitle(QApplication::translate("maximoForm", "Form", 0));
        inputmaximoFormMaskSize_2->setText(QApplication::translate("maximoForm", "Tamanho da M\303\241scara", 0));
        label->setText(QApplication::translate("maximoForm", "Esta fun\303\247\303\243o dilata a imagem,aplicando a cada pixel a intensidade m\303\241xima encontrada em sua vizinhan\303\247a.\n"
"Defina o tamanho da vizinhan\303\247a a ser utilizada a partir do Tamanho da M\303\241scara.", 0));
    } // retranslateUi

};

namespace Ui {
    class maximoForm: public Ui_maximoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAXIMOFORM_H
