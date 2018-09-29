/********************************************************************************
** Form generated from reading UI file 'redimensionarform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDIMENSIONARFORM_H
#define UI_REDIMENSIONARFORM_H

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

class Ui_redimensionarForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *inputredimensionarForml;
    QLabel *label;
    QSpinBox *inputredimensionarFormh;
    QLabel *label_3;

    void setupUi(QWidget *redimensionarForm)
    {
        if (redimensionarForm->objectName().isEmpty())
            redimensionarForm->setObjectName(QStringLiteral("redimensionarForm"));
        redimensionarForm->resize(701, 300);
        horizontalLayoutWidget = new QWidget(redimensionarForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 471, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputredimensionarForml = new QSpinBox(horizontalLayoutWidget);
        inputredimensionarForml->setObjectName(QStringLiteral("inputredimensionarForml"));
        inputredimensionarForml->setMaximum(5000);

        horizontalLayout->addWidget(inputredimensionarForml);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputredimensionarFormh = new QSpinBox(horizontalLayoutWidget);
        inputredimensionarFormh->setObjectName(QStringLiteral("inputredimensionarFormh"));
        inputredimensionarFormh->setMaximum(5000);

        horizontalLayout->addWidget(inputredimensionarFormh);

        label_3 = new QLabel(redimensionarForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 651, 16));

        retranslateUi(redimensionarForm);

        QMetaObject::connectSlotsByName(redimensionarForm);
    } // setupUi

    void retranslateUi(QWidget *redimensionarForm)
    {
        redimensionarForm->setWindowTitle(QApplication::translate("redimensionarForm", "Form", 0));
        label_2->setText(QApplication::translate("redimensionarForm", "Nova Largura", 0));
        label->setText(QApplication::translate("redimensionarForm", "Nova Altura", 0));
        label_3->setText(QApplication::translate("redimensionarForm", "Esta fun\303\247\303\243o redimensiona a imagem para o tamanho especificado.", 0));
    } // retranslateUi

};

namespace Ui {
    class redimensionarForm: public Ui_redimensionarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDIMENSIONARFORM_H
