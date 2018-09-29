/********************************************************************************
** Form generated from reading UI file 'warpingform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARPINGFORM_H
#define UI_WARPINGFORM_H

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

class Ui_warpingForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *inputwarpingForma;
    QLabel *label_3;
    QDoubleSpinBox *inputwarpingFormb;
    QLabel *label_2;
    QDoubleSpinBox *inputwarpingFormc;
    QLabel *label_8;
    QDoubleSpinBox *inputwarpingFormd;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *inputwarpingForme;
    QLabel *label_5;
    QDoubleSpinBox *inputwarpingFormf;
    QLabel *label_6;
    QDoubleSpinBox *inputwarpingFormg;
    QLabel *label_9;
    QDoubleSpinBox *inputwarpingFormh;
    QLabel *label_7;

    void setupUi(QWidget *warpingForm)
    {
        if (warpingForm->objectName().isEmpty())
            warpingForm->setObjectName(QStringLiteral("warpingForm"));
        warpingForm->resize(735, 300);
        horizontalLayoutWidget = new QWidget(warpingForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 70, 681, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputwarpingForma = new QDoubleSpinBox(horizontalLayoutWidget);
        inputwarpingForma->setObjectName(QStringLiteral("inputwarpingForma"));
        inputwarpingForma->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputwarpingForma->sizePolicy().hasHeightForWidth());
        inputwarpingForma->setSizePolicy(sizePolicy);
        inputwarpingForma->setMinimum(-1);
        inputwarpingForma->setMaximum(1);

        horizontalLayout->addWidget(inputwarpingForma);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        inputwarpingFormb = new QDoubleSpinBox(horizontalLayoutWidget);
        inputwarpingFormb->setObjectName(QStringLiteral("inputwarpingFormb"));
        inputwarpingFormb->setEnabled(true);
        sizePolicy.setHeightForWidth(inputwarpingFormb->sizePolicy().hasHeightForWidth());
        inputwarpingFormb->setSizePolicy(sizePolicy);
        inputwarpingFormb->setMinimum(-1);
        inputwarpingFormb->setMaximum(1);

        horizontalLayout->addWidget(inputwarpingFormb);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputwarpingFormc = new QDoubleSpinBox(horizontalLayoutWidget);
        inputwarpingFormc->setObjectName(QStringLiteral("inputwarpingFormc"));
        inputwarpingFormc->setEnabled(true);
        sizePolicy.setHeightForWidth(inputwarpingFormc->sizePolicy().hasHeightForWidth());
        inputwarpingFormc->setSizePolicy(sizePolicy);
        inputwarpingFormc->setMinimum(-1);
        inputwarpingFormc->setMaximum(1);

        horizontalLayout->addWidget(inputwarpingFormc);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        inputwarpingFormd = new QDoubleSpinBox(horizontalLayoutWidget);
        inputwarpingFormd->setObjectName(QStringLiteral("inputwarpingFormd"));
        inputwarpingFormd->setMinimum(-1);
        inputwarpingFormd->setMaximum(1);

        horizontalLayout->addWidget(inputwarpingFormd);

        horizontalLayoutWidget_2 = new QWidget(warpingForm);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 150, 681, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        inputwarpingForme = new QDoubleSpinBox(horizontalLayoutWidget_2);
        inputwarpingForme->setObjectName(QStringLiteral("inputwarpingForme"));
        inputwarpingForme->setEnabled(true);
        sizePolicy.setHeightForWidth(inputwarpingForme->sizePolicy().hasHeightForWidth());
        inputwarpingForme->setSizePolicy(sizePolicy);
        inputwarpingForme->setMinimum(-1);
        inputwarpingForme->setMaximum(1);

        horizontalLayout_2->addWidget(inputwarpingForme);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        inputwarpingFormf = new QDoubleSpinBox(horizontalLayoutWidget_2);
        inputwarpingFormf->setObjectName(QStringLiteral("inputwarpingFormf"));
        inputwarpingFormf->setEnabled(true);
        sizePolicy.setHeightForWidth(inputwarpingFormf->sizePolicy().hasHeightForWidth());
        inputwarpingFormf->setSizePolicy(sizePolicy);
        inputwarpingFormf->setMinimum(-1);
        inputwarpingFormf->setMaximum(1);

        horizontalLayout_2->addWidget(inputwarpingFormf);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        inputwarpingFormg = new QDoubleSpinBox(horizontalLayoutWidget_2);
        inputwarpingFormg->setObjectName(QStringLiteral("inputwarpingFormg"));
        inputwarpingFormg->setEnabled(true);
        sizePolicy.setHeightForWidth(inputwarpingFormg->sizePolicy().hasHeightForWidth());
        inputwarpingFormg->setSizePolicy(sizePolicy);
        inputwarpingFormg->setMinimum(-1);
        inputwarpingFormg->setMaximum(1);

        horizontalLayout_2->addWidget(inputwarpingFormg);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        inputwarpingFormh = new QDoubleSpinBox(horizontalLayoutWidget_2);
        inputwarpingFormh->setObjectName(QStringLiteral("inputwarpingFormh"));
        inputwarpingFormh->setMinimum(-1);
        inputwarpingFormh->setMaximum(1);

        horizontalLayout_2->addWidget(inputwarpingFormh);

        label_7 = new QLabel(warpingForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 20, 691, 31));

        retranslateUi(warpingForm);

        QMetaObject::connectSlotsByName(warpingForm);
    } // setupUi

    void retranslateUi(QWidget *warpingForm)
    {
        warpingForm->setWindowTitle(QApplication::translate("warpingForm", "Form", 0));
        label->setText(QApplication::translate("warpingForm", "A", 0));
        label_3->setText(QApplication::translate("warpingForm", "B", 0));
        label_2->setText(QApplication::translate("warpingForm", "C", 0));
        label_8->setText(QApplication::translate("warpingForm", "D", 0));
        label_4->setText(QApplication::translate("warpingForm", "E", 0));
        label_5->setText(QApplication::translate("warpingForm", "F", 0));
        label_6->setText(QApplication::translate("warpingForm", "G", 0));
        label_9->setText(QApplication::translate("warpingForm", "H", 0));
        label_7->setText(QApplication::translate("warpingForm", "Esta fun\303\247\303\243o altera a geometria e, eventualmente, a posi\303\247\303\243o da imagem. Altere os valores de a,b,c,d,e,f,g,h para controlar o template.", 0));
    } // retranslateUi

};

namespace Ui {
    class warpingForm: public Ui_warpingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARPINGFORM_H
