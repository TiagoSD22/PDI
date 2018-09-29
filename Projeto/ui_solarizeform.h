/********************************************************************************
** Form generated from reading UI file 'solarizeform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLARIZEFORM_H
#define UI_SOLARIZEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_solarizeForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *inputsolarizeFormLimiarR;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSlider *inputsolarizeFormLimiarG;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSlider *inputsolarizeFormLimiarB;
    QSpinBox *spinBox_3;
    QLabel *label_4;

    void setupUi(QWidget *solarizeForm)
    {
        if (solarizeForm->objectName().isEmpty())
            solarizeForm->setObjectName(QStringLiteral("solarizeForm"));
        solarizeForm->resize(753, 368);
        horizontalLayoutWidget = new QWidget(solarizeForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 150, 671, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputsolarizeFormLimiarR = new QSlider(horizontalLayoutWidget);
        inputsolarizeFormLimiarR->setObjectName(QStringLiteral("inputsolarizeFormLimiarR"));
        inputsolarizeFormLimiarR->setCursor(QCursor(Qt::ClosedHandCursor));
        inputsolarizeFormLimiarR->setMaximum(255);
        inputsolarizeFormLimiarR->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(inputsolarizeFormLimiarR);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMaximum(255);

        horizontalLayout->addWidget(spinBox);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputsolarizeFormLimiarG = new QSlider(horizontalLayoutWidget);
        inputsolarizeFormLimiarG->setObjectName(QStringLiteral("inputsolarizeFormLimiarG"));
        inputsolarizeFormLimiarG->setCursor(QCursor(Qt::ClosedHandCursor));
        inputsolarizeFormLimiarG->setMaximum(255);
        inputsolarizeFormLimiarG->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(inputsolarizeFormLimiarG);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_2->setMaximum(255);

        horizontalLayout->addWidget(spinBox_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        inputsolarizeFormLimiarB = new QSlider(horizontalLayoutWidget);
        inputsolarizeFormLimiarB->setObjectName(QStringLiteral("inputsolarizeFormLimiarB"));
        inputsolarizeFormLimiarB->setCursor(QCursor(Qt::ClosedHandCursor));
        inputsolarizeFormLimiarB->setMaximum(255);
        inputsolarizeFormLimiarB->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(inputsolarizeFormLimiarB);

        spinBox_3 = new QSpinBox(horizontalLayoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_3->setMaximum(255);

        horizontalLayout->addWidget(spinBox_3);

        label_4 = new QLabel(solarizeForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 701, 51));

        retranslateUi(solarizeForm);
        QObject::connect(inputsolarizeFormLimiarR, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), inputsolarizeFormLimiarR, SLOT(setValue(int)));
        QObject::connect(inputsolarizeFormLimiarG, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), inputsolarizeFormLimiarG, SLOT(setValue(int)));
        QObject::connect(inputsolarizeFormLimiarB, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), inputsolarizeFormLimiarB, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(solarizeForm);
    } // setupUi

    void retranslateUi(QWidget *solarizeForm)
    {
        solarizeForm->setWindowTitle(QApplication::translate("solarizeForm", "Form", 0));
        label->setText(QApplication::translate("solarizeForm", "Limiar de Vermelho", 0));
        label_2->setText(QApplication::translate("solarizeForm", "Limiar de Verde", 0));
        label_3->setText(QApplication::translate("solarizeForm", "Limiar de Azul", 0));
        label_4->setText(QApplication::translate("solarizeForm", "Esta fun\303\247\303\243o gera o efeito de Solarize na imagem.\n"
"O Solarize inverte as cores acima do valor de limiar especificado e mant\303\251m as que estiverem abaixo.\n"
"Controle o efeito selecionando os limiares de Vermelho,Verde e Azul.", 0));
    } // retranslateUi

};

namespace Ui {
    class solarizeForm: public Ui_solarizeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLARIZEFORM_H
