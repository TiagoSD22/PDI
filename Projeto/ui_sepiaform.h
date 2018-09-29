/********************************************************************************
** Form generated from reading UI file 'sepiaform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEPIAFORM_H
#define UI_SEPIAFORM_H

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

class Ui_sepiaForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpinBox *inputsepiaFormVLimiar;
    QLabel *label_2;

    void setupUi(QWidget *sepiaForm)
    {
        if (sepiaForm->objectName().isEmpty())
            sepiaForm->setObjectName(QStringLiteral("sepiaForm"));
        sepiaForm->resize(739, 300);
        horizontalLayoutWidget = new QWidget(sepiaForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 120, 191, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider->setMinimum(50);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        inputsepiaFormVLimiar = new QSpinBox(horizontalLayoutWidget);
        inputsepiaFormVLimiar->setObjectName(QStringLiteral("inputsepiaFormVLimiar"));
        inputsepiaFormVLimiar->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputsepiaFormVLimiar->setMinimum(50);
        inputsepiaFormVLimiar->setMaximum(100);

        horizontalLayout->addWidget(inputsepiaFormVLimiar);

        label_2 = new QLabel(sepiaForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 701, 51));

        retranslateUi(sepiaForm);
        QObject::connect(inputsepiaFormVLimiar, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), inputsepiaFormVLimiar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(sepiaForm);
    } // setupUi

    void retranslateUi(QWidget *sepiaForm)
    {
        sepiaForm->setWindowTitle(QApplication::translate("sepiaForm", "Form", 0));
        label->setText(QApplication::translate("sepiaForm", "Intensidade", 0));
        label_2->setText(QApplication::translate("sepiaForm", "Esta fun\303\247\303\243o gera um efeito de foto envelhecida. Controle o efeito a partir da intensidade.\n"
"Os valores variam de 50 a 100.", 0));
    } // retranslateUi

};

namespace Ui {
    class sepiaForm: public Ui_sepiaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEPIAFORM_H
