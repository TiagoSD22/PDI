/********************************************************************************
** Form generated from reading UI file 'alterarhsiform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARHSIFORM_H
#define UI_ALTERARHSIFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterarhsiForm
{
public:
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *rec;
    QDial *inputalterarhsiFormDeltaH;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *inputalterarhsiFormDeltaS;
    QSlider *verticalSlider;
    QLabel *label;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *inputalterarhsiFormDeltaI;
    QSlider *verticalSlider_2;
    QLabel *label_3;

    void setupUi(QWidget *alterarhsiForm)
    {
        if (alterarhsiForm->objectName().isEmpty())
            alterarhsiForm->setObjectName(QStringLiteral("alterarhsiForm"));
        alterarhsiForm->resize(716, 398);
        label_4 = new QLabel(alterarhsiForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 531, 81));
        verticalLayoutWidget = new QWidget(alterarhsiForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 120, 102, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rec = new QSpinBox(verticalLayoutWidget);
        rec->setObjectName(QStringLiteral("rec"));
        rec->setAlignment(Qt::AlignCenter);
        rec->setButtonSymbols(QAbstractSpinBox::NoButtons);
        rec->setMaximum(360);

        verticalLayout->addWidget(rec);

        inputalterarhsiFormDeltaH = new QDial(verticalLayoutWidget);
        inputalterarhsiFormDeltaH->setObjectName(QStringLiteral("inputalterarhsiFormDeltaH"));
        inputalterarhsiFormDeltaH->setMinimumSize(QSize(100, 78));
        inputalterarhsiFormDeltaH->setMaximumSize(QSize(100, 78));
        inputalterarhsiFormDeltaH->setCursor(QCursor(Qt::PointingHandCursor));
        inputalterarhsiFormDeltaH->setLayoutDirection(Qt::RightToLeft);
        inputalterarhsiFormDeltaH->setAutoFillBackground(false);
        inputalterarhsiFormDeltaH->setStyleSheet(QLatin1String("QDial{\n"
"	background : darkgray;\n"
"	selection-background-color : darkred;\n"
"}\n"
""));
        inputalterarhsiFormDeltaH->setInputMethodHints(Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        inputalterarhsiFormDeltaH->setMaximum(360);
        inputalterarhsiFormDeltaH->setPageStep(1);
        inputalterarhsiFormDeltaH->setValue(0);
        inputalterarhsiFormDeltaH->setSliderPosition(0);
        inputalterarhsiFormDeltaH->setTracking(true);
        inputalterarhsiFormDeltaH->setOrientation(Qt::Vertical);
        inputalterarhsiFormDeltaH->setInvertedAppearance(true);
        inputalterarhsiFormDeltaH->setInvertedControls(false);
        inputalterarhsiFormDeltaH->setWrapping(true);
        inputalterarhsiFormDeltaH->setNotchTarget(45);
        inputalterarhsiFormDeltaH->setNotchesVisible(true);

        verticalLayout->addWidget(inputalterarhsiFormDeltaH);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(alterarhsiForm);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 120, 101, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputalterarhsiFormDeltaS = new QSpinBox(verticalLayoutWidget_2);
        inputalterarhsiFormDeltaS->setObjectName(QStringLiteral("inputalterarhsiFormDeltaS"));
        inputalterarhsiFormDeltaS->setAlignment(Qt::AlignCenter);
        inputalterarhsiFormDeltaS->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarhsiFormDeltaS->setMinimum(-255);
        inputalterarhsiFormDeltaS->setMaximum(255);

        verticalLayout_2->addWidget(inputalterarhsiFormDeltaS);

        verticalSlider = new QSlider(verticalLayoutWidget_2);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider->setMinimum(-255);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBelow);
        verticalSlider->setTickInterval(25);

        verticalLayout_2->addWidget(verticalSlider);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label);

        verticalLayoutWidget_3 = new QWidget(alterarhsiForm);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(360, 120, 101, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inputalterarhsiFormDeltaI = new QSpinBox(verticalLayoutWidget_3);
        inputalterarhsiFormDeltaI->setObjectName(QStringLiteral("inputalterarhsiFormDeltaI"));
        inputalterarhsiFormDeltaI->setAlignment(Qt::AlignCenter);
        inputalterarhsiFormDeltaI->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarhsiFormDeltaI->setMinimum(-255);
        inputalterarhsiFormDeltaI->setMaximum(255);

        verticalLayout_3->addWidget(inputalterarhsiFormDeltaI);

        verticalSlider_2 = new QSlider(verticalLayoutWidget_3);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider_2->setMinimum(-255);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_2->setTickPosition(QSlider::TicksBelow);
        verticalSlider_2->setTickInterval(25);

        verticalLayout_3->addWidget(verticalSlider_2);

        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_3);


        retranslateUi(alterarhsiForm);
        QObject::connect(inputalterarhsiFormDeltaH, SIGNAL(valueChanged(int)), rec, SLOT(setValue(int)));
        QObject::connect(rec, SIGNAL(valueChanged(int)), inputalterarhsiFormDeltaH, SLOT(setValue(int)));
        QObject::connect(inputalterarhsiFormDeltaI, SIGNAL(valueChanged(int)), verticalSlider_2, SLOT(setValue(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), inputalterarhsiFormDeltaI, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), inputalterarhsiFormDeltaS, SLOT(setValue(int)));
        QObject::connect(inputalterarhsiFormDeltaS, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(alterarhsiForm);
    } // setupUi

    void retranslateUi(QWidget *alterarhsiForm)
    {
        alterarhsiForm->setWindowTitle(QApplication::translate("alterarhsiForm", "Form", 0));
        label_4->setText(QApplication::translate("alterarhsiForm", "Esta fun\303\247\303\243o realiza transforma\303\247\303\265es no espa\303\247o de cor HSI. \n"
"Use os respectivos deltas para alterar os valores de Hue,Saturation e Intensity.\n"
"Ap\303\263s as transforma\303\247\303\265es a imagem \303\251 convertida de volta para o espa\303\247o RGB.\n"
"O valor de H \303\251 medido em graus e pode variar de 0\302\260 a 360\302\260. Os valores de S e I variam de -255 a +255.", 0));
        label_2->setText(QApplication::translate("alterarhsiForm", "Delta H", 0));
        label->setText(QApplication::translate("alterarhsiForm", "Delta S", 0));
        label_3->setText(QApplication::translate("alterarhsiForm", "Delta I", 0));
    } // retranslateUi

};

namespace Ui {
    class alterarhsiForm: public Ui_alterarhsiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARHSIFORM_H
