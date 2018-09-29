/********************************************************************************
** Form generated from reading UI file 'chanelform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANELFORM_H
#define UI_CHANELFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chanelForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *inputchanelFormcanal;
    QLabel *label_3;
    QSpinBox *inputchanelFormMin;
    QLabel *label_2;
    QSpinBox *inputchanelFormMax;
    QLabel *label_4;

    void setupUi(QWidget *chanelForm)
    {
        if (chanelForm->objectName().isEmpty())
            chanelForm->setObjectName(QStringLiteral("chanelForm"));
        chanelForm->resize(740, 300);
        horizontalLayoutWidget = new QWidget(chanelForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 140, 621, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputchanelFormcanal = new QComboBox(horizontalLayoutWidget);
        inputchanelFormcanal->setObjectName(QStringLiteral("inputchanelFormcanal"));

        horizontalLayout->addWidget(inputchanelFormcanal);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        inputchanelFormMin = new QSpinBox(horizontalLayoutWidget);
        inputchanelFormMin->setObjectName(QStringLiteral("inputchanelFormMin"));
        inputchanelFormMin->setMaximum(255);

        horizontalLayout->addWidget(inputchanelFormMin);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputchanelFormMax = new QSpinBox(horizontalLayoutWidget);
        inputchanelFormMax->setObjectName(QStringLiteral("inputchanelFormMax"));
        inputchanelFormMax->setMaximum(255);

        horizontalLayout->addWidget(inputchanelFormMax);

        label_4 = new QLabel(chanelForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 711, 71));

        retranslateUi(chanelForm);

        QMetaObject::connectSlotsByName(chanelForm);
    } // setupUi

    void retranslateUi(QWidget *chanelForm)
    {
        chanelForm->setWindowTitle(QApplication::translate("chanelForm", "Form", 0));
        label->setText(QApplication::translate("chanelForm", "Canal", 0));
        inputchanelFormcanal->clear();
        inputchanelFormcanal->insertItems(0, QStringList()
         << QApplication::translate("chanelForm", "R", 0)
         << QApplication::translate("chanelForm", "G", 0)
         << QApplication::translate("chanelForm", "B", 0)
        );
        label_3->setText(QApplication::translate("chanelForm", "M\303\255nimo", 0));
        label_2->setText(QApplication::translate("chanelForm", "M\303\241ximo", 0));
        label_4->setText(QApplication::translate("chanelForm", "Esta fun\303\247\303\243o equaliza o histograma do canal selecionado. Use R,G, ou B para equalizar o canal Vermelho,Verde ou Azul,respectivamente.\n"
"Determine a faixa de intensidades a ser equalizada.\n"
"Para equalizar completamente o canal use 0 para o M\303\255nimo e 255 para o M\303\241ximo.", 0));
    } // retranslateUi

};

namespace Ui {
    class chanelForm: public Ui_chanelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANELFORM_H
