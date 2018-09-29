/********************************************************************************
** Form generated from reading UI file 'rotacaoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROTACAOFORM_H
#define UI_ROTACAOFORM_H

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

class Ui_rotacaoForm
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *inputrotacaoFormangulo;

    void setupUi(QWidget *rotacaoForm)
    {
        if (rotacaoForm->objectName().isEmpty())
            rotacaoForm->setObjectName(QStringLiteral("rotacaoForm"));
        rotacaoForm->resize(716, 300);
        label = new QLabel(rotacaoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 691, 16));
        horizontalLayoutWidget = new QWidget(rotacaoForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 110, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputrotacaoFormangulo = new QDoubleSpinBox(horizontalLayoutWidget);
        inputrotacaoFormangulo->setObjectName(QStringLiteral("inputrotacaoFormangulo"));
        inputrotacaoFormangulo->setMinimum(-360);
        inputrotacaoFormangulo->setMaximum(360);
        inputrotacaoFormangulo->setSingleStep(0.5);

        horizontalLayout->addWidget(inputrotacaoFormangulo);


        retranslateUi(rotacaoForm);

        QMetaObject::connectSlotsByName(rotacaoForm);
    } // setupUi

    void retranslateUi(QWidget *rotacaoForm)
    {
        rotacaoForm->setWindowTitle(QApplication::translate("rotacaoForm", "Form", 0));
        label->setText(QApplication::translate("rotacaoForm", "Esta fun\303\247\303\243o rotaciona a imagem em torno de seu centro em um \303\242ngulo arbitr\303\241rio.O \303\242ngulo \303\251 medido em graus e pode variar de -360\302\260 a +360\302\260.", 0));
        label_2->setText(QApplication::translate("rotacaoForm", "\303\202ngulo", 0));
    } // retranslateUi

};

namespace Ui {
    class rotacaoForm: public Ui_rotacaoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROTACAOFORM_H
