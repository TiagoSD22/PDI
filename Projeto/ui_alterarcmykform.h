/********************************************************************************
** Form generated from reading UI file 'alterarcmykform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARCMYKFORM_H
#define UI_ALTERARCMYKFORM_H

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

class Ui_alterarcmykForm
{
public:
    QLabel *label_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *inputalterarcmykFormDeltaC;
    QSlider *verticalSlider;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *inputalterarcmykFormDeltaM;
    QSlider *verticalSlider_2;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *inputalterarcmykFormDeltaY;
    QSlider *verticalSlider_3;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QSpinBox *inputalterarcmykFormDeltaK;
    QSlider *verticalSlider_4;
    QLabel *label_8;

    void setupUi(QWidget *alterarcmykForm)
    {
        if (alterarcmykForm->objectName().isEmpty())
            alterarcmykForm->setObjectName(QStringLiteral("alterarcmykForm"));
        alterarcmykForm->resize(700, 394);
        label_5 = new QLabel(alterarcmykForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(6, 20, 671, 41));
        verticalLayoutWidget = new QWidget(alterarcmykForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 110, 91, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inputalterarcmykFormDeltaC = new QSpinBox(verticalLayoutWidget);
        inputalterarcmykFormDeltaC->setObjectName(QStringLiteral("inputalterarcmykFormDeltaC"));
        inputalterarcmykFormDeltaC->setAlignment(Qt::AlignCenter);
        inputalterarcmykFormDeltaC->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarcmykFormDeltaC->setMinimum(-255);
        inputalterarcmykFormDeltaC->setMaximum(255);

        verticalLayout->addWidget(inputalterarcmykFormDeltaC);

        verticalSlider = new QSlider(verticalLayoutWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy);
        verticalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider->setMinimum(-255);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBelow);
        verticalSlider->setTickInterval(25);

        verticalLayout->addWidget(verticalSlider);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(alterarcmykForm);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 110, 91, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputalterarcmykFormDeltaM = new QSpinBox(verticalLayoutWidget_2);
        inputalterarcmykFormDeltaM->setObjectName(QStringLiteral("inputalterarcmykFormDeltaM"));
        inputalterarcmykFormDeltaM->setAlignment(Qt::AlignCenter);
        inputalterarcmykFormDeltaM->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarcmykFormDeltaM->setMinimum(-255);
        inputalterarcmykFormDeltaM->setMaximum(255);

        verticalLayout_2->addWidget(inputalterarcmykFormDeltaM);

        verticalSlider_2 = new QSlider(verticalLayoutWidget_2);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        sizePolicy.setHeightForWidth(verticalSlider_2->sizePolicy().hasHeightForWidth());
        verticalSlider_2->setSizePolicy(sizePolicy);
        verticalSlider_2->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider_2->setMinimum(-255);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_2->setTickPosition(QSlider::TicksBelow);
        verticalSlider_2->setTickInterval(25);

        verticalLayout_2->addWidget(verticalSlider_2);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_6);

        verticalLayoutWidget_3 = new QWidget(alterarcmykForm);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(310, 110, 91, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inputalterarcmykFormDeltaY = new QSpinBox(verticalLayoutWidget_3);
        inputalterarcmykFormDeltaY->setObjectName(QStringLiteral("inputalterarcmykFormDeltaY"));
        inputalterarcmykFormDeltaY->setAlignment(Qt::AlignCenter);
        inputalterarcmykFormDeltaY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarcmykFormDeltaY->setMinimum(-255);
        inputalterarcmykFormDeltaY->setMaximum(255);

        verticalLayout_3->addWidget(inputalterarcmykFormDeltaY);

        verticalSlider_3 = new QSlider(verticalLayoutWidget_3);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        sizePolicy.setHeightForWidth(verticalSlider_3->sizePolicy().hasHeightForWidth());
        verticalSlider_3->setSizePolicy(sizePolicy);
        verticalSlider_3->setCursor(QCursor(Qt::ClosedHandCursor));
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

        verticalLayoutWidget_4 = new QWidget(alterarcmykForm);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(450, 110, 91, 231));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        inputalterarcmykFormDeltaK = new QSpinBox(verticalLayoutWidget_4);
        inputalterarcmykFormDeltaK->setObjectName(QStringLiteral("inputalterarcmykFormDeltaK"));
        inputalterarcmykFormDeltaK->setAlignment(Qt::AlignCenter);
        inputalterarcmykFormDeltaK->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarcmykFormDeltaK->setMinimum(-255);
        inputalterarcmykFormDeltaK->setMaximum(255);

        verticalLayout_4->addWidget(inputalterarcmykFormDeltaK);

        verticalSlider_4 = new QSlider(verticalLayoutWidget_4);
        verticalSlider_4->setObjectName(QStringLiteral("verticalSlider_4"));
        sizePolicy.setHeightForWidth(verticalSlider_4->sizePolicy().hasHeightForWidth());
        verticalSlider_4->setSizePolicy(sizePolicy);
        verticalSlider_4->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalSlider_4->setMinimum(-255);
        verticalSlider_4->setMaximum(255);
        verticalSlider_4->setOrientation(Qt::Vertical);
        verticalSlider_4->setTickPosition(QSlider::TicksBelow);
        verticalSlider_4->setTickInterval(25);

        verticalLayout_4->addWidget(verticalSlider_4);

        label_8 = new QLabel(verticalLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_4->addWidget(label_8);


        retranslateUi(alterarcmykForm);
        QObject::connect(inputalterarcmykFormDeltaC, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), inputalterarcmykFormDeltaC, SLOT(setValue(int)));
        QObject::connect(inputalterarcmykFormDeltaK, SIGNAL(valueChanged(int)), verticalSlider_4, SLOT(setValue(int)));
        QObject::connect(verticalSlider_4, SIGNAL(valueChanged(int)), inputalterarcmykFormDeltaK, SLOT(setValue(int)));
        QObject::connect(inputalterarcmykFormDeltaM, SIGNAL(valueChanged(int)), verticalSlider_2, SLOT(setValue(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), inputalterarcmykFormDeltaM, SLOT(setValue(int)));
        QObject::connect(inputalterarcmykFormDeltaY, SIGNAL(valueChanged(int)), verticalSlider_3, SLOT(setValue(int)));
        QObject::connect(verticalSlider_3, SIGNAL(valueChanged(int)), inputalterarcmykFormDeltaY, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(alterarcmykForm);
    } // setupUi

    void retranslateUi(QWidget *alterarcmykForm)
    {
        alterarcmykForm->setWindowTitle(QApplication::translate("alterarcmykForm", "Form", 0));
        label_5->setText(QApplication::translate("alterarcmykForm", "Esta fun\303\247\303\243o realiza transforma\303\247\303\265es no espa\303\247o de cor CMYK. \n"
"Use Ciano,Magenta,Amarelo e Preto para alterar os valores de C,M,Y e K,respectivamente.\n"
"Ap\303\263s as transforma\303\247\303\265es a imagem \303\251 convertida de volta para o espa\303\247o RGB. Os valores variam de -255 a +255.", 0));
        label_2->setText(QApplication::translate("alterarcmykForm", "<html><head/><body><p><span style=\" color:#00ffff;\">Ciano</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("alterarcmykForm", "<html><head/><body><p><span style=\" color:#ff00ff;\">Magenta</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("alterarcmykForm", "<html><head/><body><p><span style=\" color:#ffff00;\">Amarelo</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("alterarcmykForm", "Preto", 0));
    } // retranslateUi

};

namespace Ui {
    class alterarcmykForm: public Ui_alterarcmykForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARCMYKFORM_H
