/********************************************************************************
** Form generated from reading UI file 'translacaoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLACAOFORM_H
#define UI_TRANSLACAOFORM_H

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

class Ui_translacaoForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *inputtranslacaoFormdeltai;
    QLabel *label;
    QDoubleSpinBox *inputtranslacaoFormdeltaj;
    QLabel *label_3;

    void setupUi(QWidget *translacaoForm)
    {
        if (translacaoForm->objectName().isEmpty())
            translacaoForm->setObjectName(QStringLiteral("translacaoForm"));
        translacaoForm->resize(742, 300);
        horizontalLayoutWidget = new QWidget(translacaoForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 120, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputtranslacaoFormdeltai = new QDoubleSpinBox(horizontalLayoutWidget);
        inputtranslacaoFormdeltai->setObjectName(QStringLiteral("inputtranslacaoFormdeltai"));
        inputtranslacaoFormdeltai->setDecimals(0);
        inputtranslacaoFormdeltai->setMinimum(-5000);
        inputtranslacaoFormdeltai->setMaximum(5000);

        horizontalLayout->addWidget(inputtranslacaoFormdeltai);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputtranslacaoFormdeltaj = new QDoubleSpinBox(horizontalLayoutWidget);
        inputtranslacaoFormdeltaj->setObjectName(QStringLiteral("inputtranslacaoFormdeltaj"));
        inputtranslacaoFormdeltaj->setDecimals(0);
        inputtranslacaoFormdeltaj->setMinimum(-5000);
        inputtranslacaoFormdeltaj->setMaximum(5000);

        horizontalLayout->addWidget(inputtranslacaoFormdeltaj);

        label_3 = new QLabel(translacaoForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 681, 41));

        retranslateUi(translacaoForm);

        QMetaObject::connectSlotsByName(translacaoForm);
    } // setupUi

    void retranslateUi(QWidget *translacaoForm)
    {
        translacaoForm->setWindowTitle(QApplication::translate("translacaoForm", "Form", 0));
        label_2->setText(QApplication::translate("translacaoForm", "Deslocamento Horizontal", 0));
        label->setText(QApplication::translate("translacaoForm", "Deslocamento Vertical", 0));
        label_3->setText(QApplication::translate("translacaoForm", "Esta fun\303\247\303\243o gera um efeito  de tela de rolagem na imagem.\n"
"Determine quantas colunas e/ou linhas ser\303\243o deslocadas.Utilize valores positivos para mover para a direita ou para baixo \n"
"e valores negativos para mover para a esquerda ou para cima.", 0));
    } // retranslateUi

};

namespace Ui {
    class translacaoForm: public Ui_translacaoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLACAOFORM_H
