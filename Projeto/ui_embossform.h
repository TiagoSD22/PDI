/********************************************************************************
** Form generated from reading UI file 'embossform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMBOSSFORM_H
#define UI_EMBOSSFORM_H

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

class Ui_embossForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *opcao;
    QLabel *label_2;

    void setupUi(QWidget *embossForm)
    {
        if (embossForm->objectName().isEmpty())
            embossForm->setObjectName(QStringLiteral("embossForm"));
        embossForm->resize(742, 407);
        horizontalLayoutWidget = new QWidget(embossForm);
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

        label_2 = new QLabel(embossForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 681, 31));

        retranslateUi(embossForm);

        QMetaObject::connectSlotsByName(embossForm);
    } // setupUi

    void retranslateUi(QWidget *embossForm)
    {
        embossForm->setWindowTitle(QApplication::translate("embossForm", "Form", 0));
        label->setText(QApplication::translate("embossForm", "Aplicar Cor", 0));
        opcao->setText(QString());
        label_2->setText(QApplication::translate("embossForm", "<html><head/><body><p>Esta fun\303\247\303\243o gera o efeito de Emboss na imagem. Caso queria o efeito colorido selecione a op\303\247\303\243o <span style=\" font-weight:600;\">Aplicar Cor</span>.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class embossForm: public Ui_embossForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMBOSSFORM_H
