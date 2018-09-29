/********************************************************************************
** Form generated from reading UI file 'prewittform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREWITTFORM_H
#define UI_PREWITTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prewittForm
{
public:
    QLabel *label;

    void setupUi(QWidget *prewittForm)
    {
        if (prewittForm->objectName().isEmpty())
            prewittForm->setObjectName(QStringLiteral("prewittForm"));
        prewittForm->resize(698, 300);
        label = new QLabel(prewittForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 631, 16));

        retranslateUi(prewittForm);

        QMetaObject::connectSlotsByName(prewittForm);
    } // setupUi

    void retranslateUi(QWidget *prewittForm)
    {
        prewittForm->setWindowTitle(QApplication::translate("prewittForm", "Form", 0));
        label->setText(QApplication::translate("prewittForm", "Filtro de Prewitt para detec\303\247\303\243o de bordas.", 0));
    } // retranslateUi

};

namespace Ui {
    class prewittForm: public Ui_prewittForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREWITTFORM_H
