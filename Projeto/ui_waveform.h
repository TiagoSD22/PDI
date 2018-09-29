/********************************************************************************
** Form generated from reading UI file 'waveform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEFORM_H
#define UI_WAVEFORM_H

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

class Ui_waveForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *inputwaveFormwave;
    QLabel *label;

    void setupUi(QWidget *waveForm)
    {
        if (waveForm->objectName().isEmpty())
            waveForm->setObjectName(QStringLiteral("waveForm"));
        waveForm->resize(700, 300);
        horizontalLayoutWidget = new QWidget(waveForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 161, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputwaveFormwave = new QSpinBox(horizontalLayoutWidget);
        inputwaveFormwave->setObjectName(QStringLiteral("inputwaveFormwave"));
        inputwaveFormwave->setMaximum(20);

        horizontalLayout->addWidget(inputwaveFormwave);

        label = new QLabel(waveForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 651, 16));

        retranslateUi(waveForm);

        QMetaObject::connectSlotsByName(waveForm);
    } // setupUi

    void retranslateUi(QWidget *waveForm)
    {
        waveForm->setWindowTitle(QApplication::translate("waveForm", "Form", 0));
        label_2->setText(QApplication::translate("waveForm", "N\303\272mero de ondas", 0));
        label->setText(QApplication::translate("waveForm", "Esta fun\303\247\303\243o gera uma distor\303\247\303\243o do tipo onda na imagem. Controle o n\303\255vel de distor\303\247\303\243o selecionando o n\303\272mero de ondas.", 0));
    } // retranslateUi

};

namespace Ui {
    class waveForm: public Ui_waveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEFORM_H
