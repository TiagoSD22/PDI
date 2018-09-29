/********************************************************************************
** Form generated from reading UI file 'eqhistform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQHISTFORM_H
#define UI_EQHISTFORM_H

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

class Ui_eqhistForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *inputeqhistFormMin;
    QLabel *label;
    QSpinBox *inputeqhistFormMax;
    QLabel *label_3;

    void setupUi(QWidget *eqhistForm)
    {
        if (eqhistForm->objectName().isEmpty())
            eqhistForm->setObjectName(QStringLiteral("eqhistForm"));
        eqhistForm->resize(728, 300);
        horizontalLayoutWidget = new QWidget(eqhistForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 110, 321, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputeqhistFormMin = new QSpinBox(horizontalLayoutWidget);
        inputeqhistFormMin->setObjectName(QStringLiteral("inputeqhistFormMin"));
        inputeqhistFormMin->setMaximum(255);

        horizontalLayout->addWidget(inputeqhistFormMin);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputeqhistFormMax = new QSpinBox(horizontalLayoutWidget);
        inputeqhistFormMax->setObjectName(QStringLiteral("inputeqhistFormMax"));
        inputeqhistFormMax->setMaximum(255);

        horizontalLayout->addWidget(inputeqhistFormMax);

        label_3 = new QLabel(eqhistForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 701, 41));

        retranslateUi(eqhistForm);

        QMetaObject::connectSlotsByName(eqhistForm);
    } // setupUi

    void retranslateUi(QWidget *eqhistForm)
    {
        eqhistForm->setWindowTitle(QApplication::translate("eqhistForm", "Form", 0));
        label_2->setText(QApplication::translate("eqhistForm", "M\303\255nimo", 0));
        label->setText(QApplication::translate("eqhistForm", "M\303\241ximo", 0));
        label_3->setText(QApplication::translate("eqhistForm", "Esta fun\303\247\303\243o equaliza o histograma da imagem. \n"
"Selecione o intervalo que voc\303\252 deseja equalizar,caso queira equalizar por completo o histograma selecione 0 para o M\303\255nimo e 255 para o M\303\241ximo. ", 0));
    } // retranslateUi

};

namespace Ui {
    class eqhistForm: public Ui_eqhistForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQHISTFORM_H
