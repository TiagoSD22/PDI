/********************************************************************************
** Form generated from reading UI file 'monoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONOFORM_H
#define UI_MONOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_monoForm
{
public:
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *inputmonoFormcanal;

    void setupUi(QWidget *monoForm)
    {
        if (monoForm->objectName().isEmpty())
            monoForm->setObjectName(QStringLiteral("monoForm"));
        monoForm->resize(693, 300);
        label_2 = new QLabel(monoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 381, 41));
        horizontalLayoutWidget = new QWidget(monoForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 100, 201, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputmonoFormcanal = new QComboBox(horizontalLayoutWidget);
        inputmonoFormcanal->setObjectName(QStringLiteral("inputmonoFormcanal"));

        horizontalLayout->addWidget(inputmonoFormcanal);


        retranslateUi(monoForm);

        QMetaObject::connectSlotsByName(monoForm);
    } // setupUi

    void retranslateUi(QWidget *monoForm)
    {
        monoForm->setWindowTitle(QApplication::translate("monoForm", "Form", 0));
        label_2->setText(QApplication::translate("monoForm", "Esta fun\303\247\303\243o permite visualizar a imagem RGB com apenas um de seus canais.\n"
"Use R para extrair o canal vermelho,G para o verde e B para o azul.", 0));
        label->setText(QApplication::translate("monoForm", "Canal", 0));
        inputmonoFormcanal->clear();
        inputmonoFormcanal->insertItems(0, QStringList()
         << QApplication::translate("monoForm", "R", 0)
         << QApplication::translate("monoForm", "G", 0)
         << QApplication::translate("monoForm", "B", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class monoForm: public Ui_monoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONOFORM_H
