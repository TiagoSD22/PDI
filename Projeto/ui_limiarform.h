/********************************************************************************
** Form generated from reading UI file 'limiarform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIMIARFORM_H
#define UI_LIMIARFORM_H

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

class Ui_limiarForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *slid;
    QSpinBox *inputlimiarFormVLimiar;
    QLabel *label_2;

    void setupUi(QWidget *limiarForm)
    {
        if (limiarForm->objectName().isEmpty())
            limiarForm->setObjectName(QStringLiteral("limiarForm"));
        limiarForm->resize(640, 300);
        horizontalLayoutWidget = new QWidget(limiarForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 120, 231, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        slid = new QSlider(horizontalLayoutWidget);
        slid->setObjectName(QStringLiteral("slid"));
        slid->setCursor(QCursor(Qt::ClosedHandCursor));
        slid->setMaximum(255);
        slid->setOrientation(Qt::Horizontal);
        slid->setTickPosition(QSlider::TicksBelow);
        slid->setTickInterval(128);

        horizontalLayout->addWidget(slid);

        inputlimiarFormVLimiar = new QSpinBox(horizontalLayoutWidget);
        inputlimiarFormVLimiar->setObjectName(QStringLiteral("inputlimiarFormVLimiar"));
        inputlimiarFormVLimiar->setMaximum(255);

        horizontalLayout->addWidget(inputlimiarFormVLimiar);

        label_2 = new QLabel(limiarForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 631, 31));

        retranslateUi(limiarForm);
        QObject::connect(slid, SIGNAL(valueChanged(int)), inputlimiarFormVLimiar, SLOT(setValue(int)));
        QObject::connect(inputlimiarFormVLimiar, SIGNAL(valueChanged(int)), slid, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(limiarForm);
    } // setupUi

    void retranslateUi(QWidget *limiarForm)
    {
        limiarForm->setWindowTitle(QApplication::translate("limiarForm", "Form", 0));
        label->setText(QApplication::translate("limiarForm", "Valor de Limiar", 0));
        label_2->setText(QApplication::translate("limiarForm", "Esta fun\303\247\303\243o binariza a imagem. Intensidades acima ou iguais ao Valor de Limiar ser\303\243o transformadas em 255,\n"
"enquanto intensidades abaixo do Valor de Limiar ser\303\243o transformadas em 0.", 0));
    } // retranslateUi

};

namespace Ui {
    class limiarForm: public Ui_limiarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIMIARFORM_H
