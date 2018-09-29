/********************************************************************************
** Form generated from reading UI file 'gammaform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMMAFORM_H
#define UI_GAMMAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gammaForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *inputgammaFormGamma;
    QLabel *label_2;

    void setupUi(QWidget *gammaForm)
    {
        if (gammaForm->objectName().isEmpty())
            gammaForm->setObjectName(QStringLiteral("gammaForm"));
        gammaForm->resize(724, 300);
        horizontalLayoutWidget = new QWidget(gammaForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 171, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputgammaFormGamma = new QDoubleSpinBox(horizontalLayoutWidget);
        inputgammaFormGamma->setObjectName(QStringLiteral("inputgammaFormGamma"));
        inputgammaFormGamma->setMaximum(100);
        inputgammaFormGamma->setSingleStep(0.1);

        horizontalLayout->addWidget(inputgammaFormGamma);

        label_2 = new QLabel(gammaForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 671, 16));

        retranslateUi(gammaForm);

        QMetaObject::connectSlotsByName(gammaForm);
    } // setupUi

    void retranslateUi(QWidget *gammaForm)
    {
        gammaForm->setWindowTitle(QApplication::translate("gammaForm", "Form", 0));
        label->setText(QApplication::translate("gammaForm", "Valor Gamma", 0));
        label_2->setText(QApplication::translate("gammaForm", "Esta fun\303\247\303\243o faz a corre\303\247\303\243o gamma da imagem. Use valores acima de 1 para escurecer a imagem e valores abaixo para clare\303\241-la.", 0));
    } // retranslateUi

};

namespace Ui {
    class gammaForm: public Ui_gammaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMMAFORM_H
