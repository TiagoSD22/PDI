/********************************************************************************
** Form generated from reading UI file 'glassform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLASSFORM_H
#define UI_GLASSFORM_H

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

class Ui_glassForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *inputglassFormdelta;
    QLabel *label_2;

    void setupUi(QWidget *glassForm)
    {
        if (glassForm->objectName().isEmpty())
            glassForm->setObjectName(QStringLiteral("glassForm"));
        glassForm->resize(729, 323);
        horizontalLayoutWidget = new QWidget(glassForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 130, 151, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputglassFormdelta = new QSpinBox(horizontalLayoutWidget);
        inputglassFormdelta->setObjectName(QStringLiteral("inputglassFormdelta"));
        inputglassFormdelta->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        inputglassFormdelta->setMaximum(50);

        horizontalLayout->addWidget(inputglassFormdelta);

        label_2 = new QLabel(glassForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 621, 31));

        retranslateUi(glassForm);

        QMetaObject::connectSlotsByName(glassForm);
    } // setupUi

    void retranslateUi(QWidget *glassForm)
    {
        glassForm->setWindowTitle(QApplication::translate("glassForm", "Form", 0));
        label->setText(QApplication::translate("glassForm", "N\303\255vel", 0));
        label_2->setText(QApplication::translate("glassForm", "Esta fun\303\247\303\243o gera um efeito de vidro emba\303\247ado na imagem. Controle a intensidade do efeito a partir do valor do N\303\255vel.", 0));
    } // retranslateUi

};

namespace Ui {
    class glassForm: public Ui_glassForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLASSFORM_H
