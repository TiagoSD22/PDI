/********************************************************************************
** Form generated from reading UI file 'nitidezform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NITIDEZFORM_H
#define UI_NITIDEZFORM_H

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

class Ui_nitidezForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *inputnitidezFormValue;
    QLabel *label_2;

    void setupUi(QWidget *nitidezForm)
    {
        if (nitidezForm->objectName().isEmpty())
            nitidezForm->setObjectName(QStringLiteral("nitidezForm"));
        nitidezForm->resize(692, 300);
        horizontalLayoutWidget = new QWidget(nitidezForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 90, 301, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputnitidezFormValue = new QDoubleSpinBox(horizontalLayoutWidget);
        inputnitidezFormValue->setObjectName(QStringLiteral("inputnitidezFormValue"));
        inputnitidezFormValue->setMinimum(1);
        inputnitidezFormValue->setMaximum(1000);

        horizontalLayout->addWidget(inputnitidezFormValue);

        label_2 = new QLabel(nitidezForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 531, 16));

        retranslateUi(nitidezForm);

        QMetaObject::connectSlotsByName(nitidezForm);
    } // setupUi

    void retranslateUi(QWidget *nitidezForm)
    {
        nitidezForm->setWindowTitle(QApplication::translate("nitidezForm", "Form", 0));
        label->setText(QApplication::translate("nitidezForm", "Coeficiente de Amplifica\303\247\303\243o", 0));
        label_2->setText(QApplication::translate("nitidezForm", "Esta fun\303\247\303\243o aumenta a nitidez da imagem. Use o coeficiente de amplifica\303\247\303\243o para alterar a nitidez.", 0));
    } // retranslateUi

};

namespace Ui {
    class nitidezForm: public Ui_nitidezForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NITIDEZFORM_H
