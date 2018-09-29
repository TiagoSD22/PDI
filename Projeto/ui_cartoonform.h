/********************************************************************************
** Form generated from reading UI file 'cartoonform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTOONFORM_H
#define UI_CARTOONFORM_H

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

class Ui_cartoonForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QSpinBox *inputcartoonFormVLimiar;
    QLabel *label;

    void setupUi(QWidget *cartoonForm)
    {
        if (cartoonForm->objectName().isEmpty())
            cartoonForm->setObjectName(QStringLiteral("cartoonForm"));
        cartoonForm->resize(735, 300);
        horizontalLayoutWidget = new QWidget(cartoonForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 130, 351, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        inputcartoonFormVLimiar = new QSpinBox(horizontalLayoutWidget);
        inputcartoonFormVLimiar->setObjectName(QStringLiteral("inputcartoonFormVLimiar"));
        inputcartoonFormVLimiar->setLayoutDirection(Qt::RightToLeft);
        inputcartoonFormVLimiar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        inputcartoonFormVLimiar->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputcartoonFormVLimiar->setMaximum(255);

        horizontalLayout->addWidget(inputcartoonFormVLimiar);

        label = new QLabel(cartoonForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 631, 41));

        retranslateUi(cartoonForm);
        QObject::connect(inputcartoonFormVLimiar, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), inputcartoonFormVLimiar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(cartoonForm);
    } // setupUi

    void retranslateUi(QWidget *cartoonForm)
    {
        cartoonForm->setWindowTitle(QApplication::translate("cartoonForm", "Form", 0));
        label_2->setText(QApplication::translate("cartoonForm", "Intensidade", 0));
        label->setText(QApplication::translate("cartoonForm", "Esta fun\303\247\303\243o gera um efeito de cartoon. Controle a intensidade do desenho a partir do valor de Intensidade.\n"
"Os valores podem variar de 0 a 255.", 0));
    } // retranslateUi

};

namespace Ui {
    class cartoonForm: public Ui_cartoonForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTOONFORM_H
