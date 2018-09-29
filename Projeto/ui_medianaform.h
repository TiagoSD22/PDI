/********************************************************************************
** Form generated from reading UI file 'medianaform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIANAFORM_H
#define UI_MEDIANAFORM_H

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

class Ui_medianaForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *inputmedianaFormMaskSize;
    QLabel *label_2;

    void setupUi(QWidget *medianaForm)
    {
        if (medianaForm->objectName().isEmpty())
            medianaForm->setObjectName(QStringLiteral("medianaForm"));
        medianaForm->resize(715, 300);
        horizontalLayoutWidget = new QWidget(medianaForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 181, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputmedianaFormMaskSize = new QSpinBox(horizontalLayoutWidget);
        inputmedianaFormMaskSize->setObjectName(QStringLiteral("inputmedianaFormMaskSize"));
        inputmedianaFormMaskSize->setMinimum(3);
        inputmedianaFormMaskSize->setMaximum(100);

        horizontalLayout->addWidget(inputmedianaFormMaskSize);

        label_2 = new QLabel(medianaForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 691, 31));

        retranslateUi(medianaForm);

        QMetaObject::connectSlotsByName(medianaForm);
    } // setupUi

    void retranslateUi(QWidget *medianaForm)
    {
        medianaForm->setWindowTitle(QApplication::translate("medianaForm", "Form", 0));
        label->setText(QApplication::translate("medianaForm", "Tamanho daM\303\241scara", 0));
        label_2->setText(QApplication::translate("medianaForm", "Esta fun\303\247\303\243o borra a imagem,aplicando a cada pixel a intensidade mediana encontrada em sua vizinhan\303\247a.\n"
"Defina o tamanho da vizinhan\303\247a a ser utilizada a partir do Tamanho da M\303\241scara.", 0));
    } // retranslateUi

};

namespace Ui {
    class medianaForm: public Ui_medianaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIANAFORM_H
