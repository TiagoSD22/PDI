/********************************************************************************
** Form generated from reading UI file 'fourierdiscrettransformform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURIERDISCRETTRANSFORMFORM_H
#define UI_FOURIERDISCRETTRANSFORMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourierDiscretTransformForm
{
public:

    void setupUi(QWidget *FourierDiscretTransformForm)
    {
        if (FourierDiscretTransformForm->objectName().isEmpty())
            FourierDiscretTransformForm->setObjectName(QStringLiteral("FourierDiscretTransformForm"));
        FourierDiscretTransformForm->resize(400, 300);

        retranslateUi(FourierDiscretTransformForm);

        QMetaObject::connectSlotsByName(FourierDiscretTransformForm);
    } // setupUi

    void retranslateUi(QWidget *FourierDiscretTransformForm)
    {
        FourierDiscretTransformForm->setWindowTitle(QApplication::translate("FourierDiscretTransformForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class FourierDiscretTransformForm: public Ui_FourierDiscretTransformForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURIERDISCRETTRANSFORMFORM_H
