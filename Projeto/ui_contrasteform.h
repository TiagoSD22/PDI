/********************************************************************************
** Form generated from reading UI file 'contrasteform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRASTEFORM_H
#define UI_CONTRASTEFORM_H

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

class Ui_contrasteForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *inputcontrasteFormMin;
    QLabel *label_2;
    QSpinBox *inputcontrasteFormMax;
    QLabel *label_3;

    void setupUi(QWidget *contrasteForm)
    {
        if (contrasteForm->objectName().isEmpty())
            contrasteForm->setObjectName(QStringLiteral("contrasteForm"));
        contrasteForm->resize(688, 300);
        horizontalLayoutWidget = new QWidget(contrasteForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 100, 341, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputcontrasteFormMin = new QSpinBox(horizontalLayoutWidget);
        inputcontrasteFormMin->setObjectName(QStringLiteral("inputcontrasteFormMin"));
        inputcontrasteFormMin->setMaximum(255);

        horizontalLayout->addWidget(inputcontrasteFormMin);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputcontrasteFormMax = new QSpinBox(horizontalLayoutWidget);
        inputcontrasteFormMax->setObjectName(QStringLiteral("inputcontrasteFormMax"));
        inputcontrasteFormMax->setMaximum(255);

        horizontalLayout->addWidget(inputcontrasteFormMax);

        label_3 = new QLabel(contrasteForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 661, 31));

        retranslateUi(contrasteForm);

        QMetaObject::connectSlotsByName(contrasteForm);
    } // setupUi

    void retranslateUi(QWidget *contrasteForm)
    {
        contrasteForm->setWindowTitle(QApplication::translate("contrasteForm", "Form", 0));
        label->setText(QApplication::translate("contrasteForm", "M\303\255nimo", 0));
        label_2->setText(QApplication::translate("contrasteForm", "M\303\241ximo", 0));
        label_3->setText(QApplication::translate("contrasteForm", "Esta fun\303\247\303\243o limita o valores m\303\241ximo e m\303\255nimo de contraste da imagem para o intervalo especificado. Os valores variam de 0 a 255.", 0));
    } // retranslateUi

};

namespace Ui {
    class contrasteForm: public Ui_contrasteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRASTEFORM_H
