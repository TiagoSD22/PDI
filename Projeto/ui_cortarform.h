/********************************************************************************
** Form generated from reading UI file 'cortarform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORTARFORM_H
#define UI_CORTARFORM_H

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

class Ui_cortarForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *inputcortarFormii;
    QLabel *label_3;
    QSpinBox *inputcortarFormifi;
    QLabel *label_4;
    QSpinBox *inputcortarFormji;
    QLabel *label;
    QSpinBox *inputcortarFormjf;
    QLabel *label_5;

    void setupUi(QWidget *cortarForm)
    {
        if (cortarForm->objectName().isEmpty())
            cortarForm->setObjectName(QStringLiteral("cortarForm"));
        cortarForm->resize(740, 300);
        horizontalLayoutWidget = new QWidget(cortarForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 120, 671, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputcortarFormii = new QSpinBox(horizontalLayoutWidget);
        inputcortarFormii->setObjectName(QStringLiteral("inputcortarFormii"));
        inputcortarFormii->setMaximum(5000);

        horizontalLayout->addWidget(inputcortarFormii);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        inputcortarFormifi = new QSpinBox(horizontalLayoutWidget);
        inputcortarFormifi->setObjectName(QStringLiteral("inputcortarFormifi"));
        inputcortarFormifi->setMaximum(5000);

        horizontalLayout->addWidget(inputcortarFormifi);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        inputcortarFormji = new QSpinBox(horizontalLayoutWidget);
        inputcortarFormji->setObjectName(QStringLiteral("inputcortarFormji"));
        inputcortarFormji->setMaximum(5000);

        horizontalLayout->addWidget(inputcortarFormji);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputcortarFormjf = new QSpinBox(horizontalLayoutWidget);
        inputcortarFormjf->setObjectName(QStringLiteral("inputcortarFormjf"));
        inputcortarFormjf->setMaximum(5000);

        horizontalLayout->addWidget(inputcortarFormjf);

        label_5 = new QLabel(cortarForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 30, 631, 16));

        retranslateUi(cortarForm);

        QMetaObject::connectSlotsByName(cortarForm);
    } // setupUi

    void retranslateUi(QWidget *cortarForm)
    {
        cortarForm->setWindowTitle(QApplication::translate("cortarForm", "Form", 0));
        label_2->setText(QApplication::translate("cortarForm", "Largura Inicial", 0));
        label_3->setText(QApplication::translate("cortarForm", "Largura Final", 0));
        label_4->setText(QApplication::translate("cortarForm", "Altura Inicial", 0));
        label->setText(QApplication::translate("cortarForm", "Altura Final", 0));
        label_5->setText(QApplication::translate("cortarForm", "Esta fun\303\247\303\243o corta uma regi\303\243o da imagem. Defina os valores iniciais e finais de largura e altura para delimitar a regi\303\243o.", 0));
    } // retranslateUi

};

namespace Ui {
    class cortarForm: public Ui_cortarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORTARFORM_H
