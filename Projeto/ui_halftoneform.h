/********************************************************************************
** Form generated from reading UI file 'halftoneform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALFTONEFORM_H
#define UI_HALFTONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_halftoneForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *opcao;
    QLabel *label_2;

    void setupUi(QWidget *halftoneForm)
    {
        if (halftoneForm->objectName().isEmpty())
            halftoneForm->setObjectName(QStringLiteral("halftoneForm"));
        halftoneForm->resize(742, 407);
        horizontalLayoutWidget = new QWidget(halftoneForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 140, 91, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        opcao = new QRadioButton(horizontalLayoutWidget);
        opcao->setObjectName(QStringLiteral("opcao"));
        opcao->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(opcao);

        label_2 = new QLabel(halftoneForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 681, 31));

        retranslateUi(halftoneForm);

        QMetaObject::connectSlotsByName(halftoneForm);
    } // setupUi

    void retranslateUi(QWidget *halftoneForm)
    {
        halftoneForm->setWindowTitle(QApplication::translate("halftoneForm", "Form", 0));
        label->setText(QApplication::translate("halftoneForm", "Aplicar Cor", 0));
        opcao->setText(QString());
        label_2->setText(QApplication::translate("halftoneForm", "<html><head/><body><p>Esta fun\303\247\303\243o gera o efeito de Halftone na imagem. Caso queria o efeito colorido selecione a op\303\247\303\243o <span style=\" font-weight:600;\">Aplicar Cor</span>.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class halftoneForm: public Ui_halftoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALFTONEFORM_H
