/********************************************************************************
** Form generated from reading UI file 'alterarycbcrform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARYCBCRFORM_H
#define UI_ALTERARYCBCRFORM_H

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

class Ui_alterarYCbCrForm
{
public:
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *inputalterarYCbCrFormDeltaY;
    QSlider *verticalSlider;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *inputalterarYCbCrFormDeltaCb;
    QSlider *verticalSlider_2;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *inputalterarYCbCrFormDeltaCr;
    QSlider *verticalSlider_3;
    QLabel *label_7;

    void setupUi(QWidget *alterarYCbCrForm)
    {
        if (alterarYCbCrForm->objectName().isEmpty())
            alterarYCbCrForm->setObjectName(QStringLiteral("alterarYCbCrForm"));
        alterarYCbCrForm->resize(677, 469);
        label_4 = new QLabel(alterarYCbCrForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 621, 51));
        verticalLayoutWidget = new QWidget(alterarYCbCrForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 91, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inputalterarYCbCrFormDeltaY = new QSpinBox(verticalLayoutWidget);
        inputalterarYCbCrFormDeltaY->setObjectName(QStringLiteral("inputalterarYCbCrFormDeltaY"));
        inputalterarYCbCrFormDeltaY->setAlignment(Qt::AlignCenter);
        inputalterarYCbCrFormDeltaY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarYCbCrFormDeltaY->setMinimum(-255);
        inputalterarYCbCrFormDeltaY->setMaximum(255);

        verticalLayout->addWidget(inputalterarYCbCrFormDeltaY);

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

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_5);

        verticalLayoutWidget_2 = new QWidget(alterarYCbCrForm);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 110, 91, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputalterarYCbCrFormDeltaCb = new QSpinBox(verticalLayoutWidget_2);
        inputalterarYCbCrFormDeltaCb->setObjectName(QStringLiteral("inputalterarYCbCrFormDeltaCb"));
        inputalterarYCbCrFormDeltaCb->setAlignment(Qt::AlignCenter);
        inputalterarYCbCrFormDeltaCb->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarYCbCrFormDeltaCb->setMinimum(-255);
        inputalterarYCbCrFormDeltaCb->setMaximum(255);

        verticalLayout_2->addWidget(inputalterarYCbCrFormDeltaCb);

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
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_6);

        verticalLayoutWidget_3 = new QWidget(alterarYCbCrForm);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(290, 110, 107, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inputalterarYCbCrFormDeltaCr = new QSpinBox(verticalLayoutWidget_3);
        inputalterarYCbCrFormDeltaCr->setObjectName(QStringLiteral("inputalterarYCbCrFormDeltaCr"));
        inputalterarYCbCrFormDeltaCr->setAlignment(Qt::AlignCenter);
        inputalterarYCbCrFormDeltaCr->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarYCbCrFormDeltaCr->setMinimum(-255);
        inputalterarYCbCrFormDeltaCr->setMaximum(255);

        verticalLayout_3->addWidget(inputalterarYCbCrFormDeltaCr);

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


        retranslateUi(alterarYCbCrForm);
        QObject::connect(inputalterarYCbCrFormDeltaY, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), inputalterarYCbCrFormDeltaY, SLOT(setValue(int)));
        QObject::connect(inputalterarYCbCrFormDeltaCb, SIGNAL(valueChanged(int)), verticalSlider_2, SLOT(setValue(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), inputalterarYCbCrFormDeltaCb, SLOT(setValue(int)));
        QObject::connect(inputalterarYCbCrFormDeltaCr, SIGNAL(valueChanged(int)), verticalSlider_3, SLOT(setValue(int)));
        QObject::connect(verticalSlider_3, SIGNAL(valueChanged(int)), inputalterarYCbCrFormDeltaCr, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(alterarYCbCrForm);
    } // setupUi

    void retranslateUi(QWidget *alterarYCbCrForm)
    {
        alterarYCbCrForm->setWindowTitle(QApplication::translate("alterarYCbCrForm", "Form", 0));
        label_4->setText(QApplication::translate("alterarYCbCrForm", "Esta fun\303\247\303\243o realiza transforma\303\247\303\265es no espa\303\247o de cor YCbCr.\n"
"Utilize Lumin\303\242ncia, Cromin\303\242ncia Azul e Cromin\303\242ncia Vermelha para alterar respectivamente os valores de Y,Cb,Cr.\n"
"Ap\303\263s as transforma\303\247\303\265es a imagem \303\251 convertida de volta para o espa\303\247o RGB.Os valores podem variar de -255 a +255.", 0));
        label_5->setText(QApplication::translate("alterarYCbCrForm", "<html><head/><body><p><span style=\" color:#000000;\">Lumin\303\242ncia</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("alterarYCbCrForm", "<html><head/><body><p><span style=\" color:#0000ff;\">Cromin\303\242ncia Azul</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("alterarYCbCrForm", "<html><head/><body><p><span style=\" color:#ff0000;\">Cromin\303\242ncia Vermelha</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class alterarYCbCrForm: public Ui_alterarYCbCrForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARYCBCRFORM_H
