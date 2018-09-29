/********************************************************************************
** Form generated from reading UI file 'oilform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OILFORM_H
#define UI_OILFORM_H

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

class Ui_oilForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QSpinBox *inputoilFormlevel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QSpinBox *inputoilFormmascara;
    QLabel *label;

    void setupUi(QWidget *oilForm)
    {
        if (oilForm->objectName().isEmpty())
            oilForm->setObjectName(QStringLiteral("oilForm"));
        oilForm->resize(733, 335);
        horizontalLayoutWidget = new QWidget(oilForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 120, 371, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        inputoilFormlevel = new QSpinBox(horizontalLayoutWidget);
        inputoilFormlevel->setObjectName(QStringLiteral("inputoilFormlevel"));
        inputoilFormlevel->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputoilFormlevel->setMinimum(10);
        inputoilFormlevel->setMaximum(100);

        horizontalLayout->addWidget(inputoilFormlevel);

        horizontalLayoutWidget_2 = new QWidget(oilForm);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 210, 371, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_2 = new QSlider(horizontalLayoutWidget_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(3);
        horizontalSlider_2->setMaximum(15);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        inputoilFormmascara = new QSpinBox(horizontalLayoutWidget_2);
        inputoilFormmascara->setObjectName(QStringLiteral("inputoilFormmascara"));
        inputoilFormmascara->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputoilFormmascara->setMinimum(3);
        inputoilFormmascara->setMaximum(15);

        horizontalLayout_2->addWidget(inputoilFormmascara);

        label = new QLabel(oilForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 661, 31));

        retranslateUi(oilForm);
        QObject::connect(inputoilFormlevel, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(inputoilFormmascara, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), inputoilFormlevel, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), inputoilFormmascara, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(oilForm);
    } // setupUi

    void retranslateUi(QWidget *oilForm)
    {
        oilForm->setWindowTitle(QApplication::translate("oilForm", "Form", 0));
        label_2->setText(QApplication::translate("oilForm", "N\303\255veis de intensidade", 0));
        label_3->setText(QApplication::translate("oilForm", "Tamanho da M\303\241scara", 0));
        label->setText(QApplication::translate("oilForm", "Esta fun\303\247\303\243o aplica um efeito de pintura a \303\263leo na imagem. \n"
"Controle a intensidade do efeito a partir dos n\303\255veis de intensidade e do tamanho da vizinha\303\247a a ser considerada.", 0));
    } // retranslateUi

};

namespace Ui {
    class oilForm: public Ui_oilForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OILFORM_H
