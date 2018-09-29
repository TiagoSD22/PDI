/********************************************************************************
** Form generated from reading UI file 'blurform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLURFORM_H
#define UI_BLURFORM_H

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

class Ui_blurForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *inputblurFormMaskSize;
    QLabel *label_2;

    void setupUi(QWidget *blurForm)
    {
        if (blurForm->objectName().isEmpty())
            blurForm->setObjectName(QStringLiteral("blurForm"));
        blurForm->resize(720, 300);
        horizontalLayoutWidget = new QWidget(blurForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 161, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputblurFormMaskSize = new QSpinBox(horizontalLayoutWidget);
        inputblurFormMaskSize->setObjectName(QStringLiteral("inputblurFormMaskSize"));
        inputblurFormMaskSize->setMinimum(3);

        horizontalLayout->addWidget(inputblurFormMaskSize);

        label_2 = new QLabel(blurForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 651, 41));

        retranslateUi(blurForm);

        QMetaObject::connectSlotsByName(blurForm);
    } // setupUi

    void retranslateUi(QWidget *blurForm)
    {
        blurForm->setWindowTitle(QApplication::translate("blurForm", "Form", 0));
        label->setText(QApplication::translate("blurForm", "Tamanho da M\303\241scara", 0));
        label_2->setText(QApplication::translate("blurForm", "Esta fun\303\247\303\243o borra a imagem,aplicando a cada pixel a m\303\251dia das intensidades encontradas em sua vizinhan\303\247a.\n"
"Defina o tamanho da vizinhan\303\247a a ser utilizada a partir do Tamanho da M\303\241scara.", 0));
    } // retranslateUi

};

namespace Ui {
    class blurForm: public Ui_blurForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLURFORM_H
