/********************************************************************************
** Form generated from reading UI file 'alterarrgbform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARRGBFORM_H
#define UI_ALTERARRGBFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterarRGBForm
{
public:
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *inputalterarRGBFormDeltaR;
    QSlider *verticalSlider;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *inputalterarRGBFormDeltaG;
    QSlider *verticalSlider_2;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *inputalterarRGBFormDeltaB;
    QSlider *verticalSlider_3;
    QLabel *label_7;

    void setupUi(QWidget *alterarRGBForm)
    {
        if (alterarRGBForm->objectName().isEmpty())
            alterarRGBForm->setObjectName(QStringLiteral("alterarRGBForm"));
        alterarRGBForm->resize(737, 441);
        label_4 = new QLabel(alterarRGBForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 20, 651, 41));
        verticalLayoutWidget = new QWidget(alterarRGBForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 91, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inputalterarRGBFormDeltaR = new QSpinBox(verticalLayoutWidget);
        inputalterarRGBFormDeltaR->setObjectName(QStringLiteral("inputalterarRGBFormDeltaR"));
        inputalterarRGBFormDeltaR->setAlignment(Qt::AlignCenter);
        inputalterarRGBFormDeltaR->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarRGBFormDeltaR->setMinimum(-255);
        inputalterarRGBFormDeltaR->setMaximum(255);

        verticalLayout->addWidget(inputalterarRGBFormDeltaR);

        verticalSlider = new QSlider(verticalLayoutWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy);
        verticalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider->setStyleSheet(QStringLiteral(""));
        verticalSlider->setMinimum(-255);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBelow);
        verticalSlider->setTickInterval(25);

        verticalLayout->addWidget(verticalSlider);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_5);

        verticalLayoutWidget_2 = new QWidget(alterarRGBForm);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 110, 91, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputalterarRGBFormDeltaG = new QSpinBox(verticalLayoutWidget_2);
        inputalterarRGBFormDeltaG->setObjectName(QStringLiteral("inputalterarRGBFormDeltaG"));
        inputalterarRGBFormDeltaG->setAlignment(Qt::AlignCenter);
        inputalterarRGBFormDeltaG->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarRGBFormDeltaG->setMinimum(-255);
        inputalterarRGBFormDeltaG->setMaximum(255);

        verticalLayout_2->addWidget(inputalterarRGBFormDeltaG);

        verticalSlider_2 = new QSlider(verticalLayoutWidget_2);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        sizePolicy.setHeightForWidth(verticalSlider_2->sizePolicy().hasHeightForWidth());
        verticalSlider_2->setSizePolicy(sizePolicy);
        verticalSlider_2->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider_2->setStyleSheet(QLatin1String("QSlider{\n"
"	selection-color : green;\n"
"}\n"
""));
        verticalSlider_2->setMinimum(-255);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_2->setTickPosition(QSlider::TicksBelow);
        verticalSlider_2->setTickInterval(25);

        verticalLayout_2->addWidget(verticalSlider_2);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_6);

        verticalLayoutWidget_3 = new QWidget(alterarRGBForm);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(310, 110, 91, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inputalterarRGBFormDeltaB = new QSpinBox(verticalLayoutWidget_3);
        inputalterarRGBFormDeltaB->setObjectName(QStringLiteral("inputalterarRGBFormDeltaB"));
        inputalterarRGBFormDeltaB->setAlignment(Qt::AlignCenter);
        inputalterarRGBFormDeltaB->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarRGBFormDeltaB->setMinimum(-255);
        inputalterarRGBFormDeltaB->setMaximum(255);

        verticalLayout_3->addWidget(inputalterarRGBFormDeltaB);

        verticalSlider_3 = new QSlider(verticalLayoutWidget_3);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        sizePolicy.setHeightForWidth(verticalSlider_3->sizePolicy().hasHeightForWidth());
        verticalSlider_3->setSizePolicy(sizePolicy);
        verticalSlider_3->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider_3->setStyleSheet(QLatin1String("QSlider{\n"
"	selection-background-color :blue;\n"
"}\n"
""));
        verticalSlider_3->setMinimum(-255);
        verticalSlider_3->setMaximum(255);
        verticalSlider_3->setOrientation(Qt::Vertical);
        verticalSlider_3->setTickPosition(QSlider::TicksBelow);
        verticalSlider_3->setTickInterval(25);

        verticalLayout_3->addWidget(verticalSlider_3);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_7);


        retranslateUi(alterarRGBForm);
        QObject::connect(inputalterarRGBFormDeltaR, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), inputalterarRGBFormDeltaR, SLOT(setValue(int)));
        QObject::connect(inputalterarRGBFormDeltaG, SIGNAL(valueChanged(int)), verticalSlider_2, SLOT(setValue(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), inputalterarRGBFormDeltaG, SLOT(setValue(int)));
        QObject::connect(inputalterarRGBFormDeltaB, SIGNAL(valueChanged(int)), verticalSlider_3, SLOT(setValue(int)));
        QObject::connect(verticalSlider_3, SIGNAL(valueChanged(int)), inputalterarRGBFormDeltaB, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(alterarRGBForm);
    } // setupUi

    void retranslateUi(QWidget *alterarRGBForm)
    {
        alterarRGBForm->setWindowTitle(QApplication::translate("alterarRGBForm", "Form", 0));
        label_4->setText(QApplication::translate("alterarRGBForm", "Esta fun\303\247\303\243o altera as intensidades individuais de cada canal. \n"
"Use Vermelho,Verde e Azul para aumentar ou diminuir os canais de Vermelho, Verde e Azul da imagem.\n"
"Os valores podem variar de -255 a +255.", 0));
        label_5->setText(QApplication::translate("alterarRGBForm", "<html><head/><body><p><span style=\" color:#ff0000;\">Vermelho</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("alterarRGBForm", "<html><head/><body><p><span style=\" color:#00ff00;\">Verde</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("alterarRGBForm", "<html><head/><body><p><span style=\" color:#0000ff;\">Azul</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class alterarRGBForm: public Ui_alterarRGBForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARRGBFORM_H
