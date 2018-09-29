/********************************************************************************
** Form generated from reading UI file 'alterarcontrasteform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARCONTRASTEFORM_H
#define UI_ALTERARCONTRASTEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterarcontrasteForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelvaluealterarcontrasteForm;
    QSlider *horizontalSlider;
    QSpinBox *inputalterarcontrasteFormValue;
    QLabel *label;

    void setupUi(QWidget *alterarcontrasteForm)
    {
        if (alterarcontrasteForm->objectName().isEmpty())
            alterarcontrasteForm->setObjectName(QStringLiteral("alterarcontrasteForm"));
        alterarcontrasteForm->resize(652, 300);
        horizontalLayoutWidget = new QWidget(alterarcontrasteForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 371, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelvaluealterarcontrasteForm = new QLabel(horizontalLayoutWidget);
        labelvaluealterarcontrasteForm->setObjectName(QStringLiteral("labelvaluealterarcontrasteForm"));

        horizontalLayout->addWidget(labelvaluealterarcontrasteForm);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider->setContextMenuPolicy(Qt::ActionsContextMenu);
        horizontalSlider->setAcceptDrops(true);
        horizontalSlider->setMinimum(-255);
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(25);

        horizontalLayout->addWidget(horizontalSlider);

        inputalterarcontrasteFormValue = new QSpinBox(horizontalLayoutWidget);
        inputalterarcontrasteFormValue->setObjectName(QStringLiteral("inputalterarcontrasteFormValue"));
        inputalterarcontrasteFormValue->setFrame(true);
        inputalterarcontrasteFormValue->setAlignment(Qt::AlignCenter);
        inputalterarcontrasteFormValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inputalterarcontrasteFormValue->setAccelerated(false);
        inputalterarcontrasteFormValue->setMinimum(-255);
        inputalterarcontrasteFormValue->setMaximum(255);

        horizontalLayout->addWidget(inputalterarcontrasteFormValue);

        label = new QLabel(alterarcontrasteForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 10, 631, 31));

        retranslateUi(alterarcontrasteForm);
        QObject::connect(inputalterarcontrasteFormValue, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), inputalterarcontrasteFormValue, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(alterarcontrasteForm);
    } // setupUi

    void retranslateUi(QWidget *alterarcontrasteForm)
    {
        alterarcontrasteForm->setWindowTitle(QApplication::translate("alterarcontrasteForm", "Form", 0));
        labelvaluealterarcontrasteForm->setText(QApplication::translate("alterarcontrasteForm", "Alterar Contraste em", 0));
        label->setText(QApplication::translate("alterarcontrasteForm", "Esta fun\303\247\303\243o aumenta ou diminui o contraste da imagem. Use valores positivos para clarear e negativos para escurecer a imagem.\n"
"Os valores podem variar de -255 a +255.", 0));
    } // retranslateUi

};

namespace Ui {
    class alterarcontrasteForm: public Ui_alterarcontrasteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARCONTRASTEFORM_H
