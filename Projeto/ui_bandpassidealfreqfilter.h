/********************************************************************************
** Form generated from reading UI file 'bandpassidealfreqfilter.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANDPASSIDEALFREQFILTER_H
#define UI_BANDPASSIDEALFREQFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BandPassIdealFreqFilterForm
{
public:
    QRadioButton *inputReject;
    QLabel *label;
    QLabel *labelWarning;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCutOff;
    QDoubleSpinBox *inputCutOffFreq;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFreqBand;
    QDoubleSpinBox *inputFreqBand;
    QRadioButton *inputShowSpectrum;

    void setupUi(QWidget *BandPassIdealFreqFilterForm)
    {
        if (BandPassIdealFreqFilterForm->objectName().isEmpty())
            BandPassIdealFreqFilterForm->setObjectName(QStringLiteral("BandPassIdealFreqFilterForm"));
        BandPassIdealFreqFilterForm->resize(400, 300);
        inputReject = new QRadioButton(BandPassIdealFreqFilterForm);
        inputReject->setObjectName(QStringLiteral("inputReject"));
        inputReject->setGeometry(QRect(40, 210, 102, 20));
        inputReject->setChecked(true);
        label = new QLabel(BandPassIdealFreqFilterForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 261, 81));
        label->setWordWrap(true);
        labelWarning = new QLabel(BandPassIdealFreqFilterForm);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setGeometry(QRect(10, 240, 381, 51));
        QPalette palette;
        QBrush brush(QColor(248, 8, 31, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(148, 148, 148, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        labelWarning->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelWarning->setFont(font);
        labelWarning->setWordWrap(true);
        layoutWidget = new QWidget(BandPassIdealFreqFilterForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 110, 202, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCutOff = new QLabel(layoutWidget);
        labelCutOff->setObjectName(QStringLiteral("labelCutOff"));

        horizontalLayout->addWidget(labelCutOff);

        inputCutOffFreq = new QDoubleSpinBox(layoutWidget);
        inputCutOffFreq->setObjectName(QStringLiteral("inputCutOffFreq"));

        horizontalLayout->addWidget(inputCutOffFreq);

        layoutWidget1 = new QWidget(BandPassIdealFreqFilterForm);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 150, 201, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelFreqBand = new QLabel(layoutWidget1);
        labelFreqBand->setObjectName(QStringLiteral("labelFreqBand"));

        horizontalLayout_2->addWidget(labelFreqBand);

        inputFreqBand = new QDoubleSpinBox(layoutWidget1);
        inputFreqBand->setObjectName(QStringLiteral("inputFreqBand"));

        horizontalLayout_2->addWidget(inputFreqBand);

        inputShowSpectrum = new QRadioButton(BandPassIdealFreqFilterForm);
        inputShowSpectrum->setObjectName(QStringLiteral("inputShowSpectrum"));
        inputShowSpectrum->setGeometry(QRect(160, 210, 181, 20));
        inputShowSpectrum->setAutoExclusive(false);

        retranslateUi(BandPassIdealFreqFilterForm);

        QMetaObject::connectSlotsByName(BandPassIdealFreqFilterForm);
    } // setupUi

    void retranslateUi(QWidget *BandPassIdealFreqFilterForm)
    {
        BandPassIdealFreqFilterForm->setWindowTitle(QApplication::translate("BandPassIdealFreqFilterForm", "Form", 0));
        inputReject->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Rejeita Faixa", 0));
        label->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Este \303\251 um filtro de passa/rejeita faixa no dom\303\255nio da frequ\303\252ncia.", 0));
        labelWarning->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Aten\303\247\303\243o: esta implementa\303\247\303\243o n\303\243o \303\251 eficiente, portanto, use imagens de baixa resolu\303\247\303\243o. Em breve providenciaremos uma solu\303\247\303\243o.", 0));
        labelCutOff->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Frequ\303\252ncia de Corte", 0));
        labelFreqBand->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Tamanho da Faixa", 0));
        inputShowSpectrum->setText(QApplication::translate("BandPassIdealFreqFilterForm", "Apenas Mostrar Espectro", 0));
    } // retranslateUi

};

namespace Ui {
    class BandPassIdealFreqFilterForm: public Ui_BandPassIdealFreqFilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANDPASSIDEALFREQFILTER_H
