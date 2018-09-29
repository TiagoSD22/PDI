/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_source;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea1;
    QWidget *scrollAreaWidgetContents1;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *sourceImageViewer;
    QGroupBox *groupBox;
    QListWidget *inputLayerList;
    QPushButton *actionDownLayer;
    QPushButton *actionAddLayer;
    QPushButton *actionUpLayer;
    QPushButton *actionDelLayer;
    QGroupBox *groupBox1;
    QPushButton *actionPlayFilter;
    QComboBox *inputFilter;
    QSlider *zoom;
    QWidget *tab_filters;
    QVBoxLayout *verticalLayout_5;
    QWidget *filterWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *contextualFilterWidget;
    QGraphicsView *previa;
    QPushButton *pushButton;
    QPushButton *actionConfirmApplyFilter;
    QWidget *tab_target;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea2;
    QWidget *scrollAreaWidgetContents2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *actionCopyToSource;
    QGraphicsView *targetImageViewer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1268, 592);
        QIcon icon;
        icon.addFile(QStringLiteral("../icone.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setMenuRole(QAction::AboutRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: rgb(221, 61, 33); /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: rgb(85, 170, 255)\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   "
                        " margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}"));
        tabWidget->setDocumentMode(false);
        tab_source = new QWidget();
        tab_source->setObjectName(QStringLiteral("tab_source"));
        sizePolicy.setHeightForWidth(tab_source->sizePolicy().hasHeightForWidth());
        tab_source->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(tab_source);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea1 = new QScrollArea(tab_source);
        scrollArea1->setObjectName(QStringLiteral("scrollArea1"));
        scrollArea1->setWidgetResizable(true);
        scrollAreaWidgetContents1 = new QWidget();
        scrollAreaWidgetContents1->setObjectName(QStringLiteral("scrollAreaWidgetContents1"));
        scrollAreaWidgetContents1->setGeometry(QRect(0, 0, 1022, 486));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents1->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents1->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents1->setCursor(QCursor(Qt::ClosedHandCursor));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        sourceImageViewer = new QGraphicsView(scrollAreaWidgetContents1);
        sourceImageViewer->setObjectName(QStringLiteral("sourceImageViewer"));
        sourceImageViewer->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        sourceImageViewer->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_3->addWidget(sourceImageViewer);

        scrollArea1->setWidget(scrollAreaWidgetContents1);

        horizontalLayout->addWidget(scrollArea1);

        groupBox = new QGroupBox(tab_source);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(200, 16777215));
        inputLayerList = new QListWidget(groupBox);
        inputLayerList->setObjectName(QStringLiteral("inputLayerList"));
        inputLayerList->setGeometry(QRect(0, 30, 191, 181));
        inputLayerList->setFrameShape(QFrame::WinPanel);
        inputLayerList->setDragDropMode(QAbstractItemView::DragDrop);
        actionDownLayer = new QPushButton(groupBox);
        actionDownLayer->setObjectName(QStringLiteral("actionDownLayer"));
        actionDownLayer->setGeometry(QRect(150, 220, 44, 27));
        actionDownLayer->setCursor(QCursor(Qt::PointingHandCursor));
        actionDownLayer->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        actionAddLayer = new QPushButton(groupBox);
        actionAddLayer->setObjectName(QStringLiteral("actionAddLayer"));
        actionAddLayer->setGeometry(QRect(0, 220, 44, 27));
        actionAddLayer->setCursor(QCursor(Qt::PointingHandCursor));
        actionAddLayer->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        actionUpLayer = new QPushButton(groupBox);
        actionUpLayer->setObjectName(QStringLiteral("actionUpLayer"));
        actionUpLayer->setGeometry(QRect(100, 220, 44, 27));
        actionUpLayer->setCursor(QCursor(Qt::PointingHandCursor));
        actionUpLayer->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255)\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        actionDelLayer = new QPushButton(groupBox);
        actionDelLayer->setObjectName(QStringLiteral("actionDelLayer"));
        actionDelLayer->setGeometry(QRect(50, 220, 44, 27));
        actionDelLayer->setCursor(QCursor(Qt::PointingHandCursor));
        actionDelLayer->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        groupBox1 = new QGroupBox(groupBox);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(0, 270, 191, 221));
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        actionPlayFilter = new QPushButton(groupBox1);
        actionPlayFilter->setObjectName(QStringLiteral("actionPlayFilter"));
        actionPlayFilter->setGeometry(QRect(120, 20, 71, 31));
        actionPlayFilter->setCursor(QCursor(Qt::PointingHandCursor));
        actionPlayFilter->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        inputFilter = new QComboBox(groupBox1);
        inputFilter->setObjectName(QStringLiteral("inputFilter"));
        inputFilter->setGeometry(QRect(0, 20, 121, 31));
        inputFilter->setCursor(QCursor(Qt::PointingHandCursor));
        inputFilter->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
""));
        inputFilter->setFrame(true);
        zoom = new QSlider(groupBox1);
        zoom->setObjectName(QStringLiteral("zoom"));
        zoom->setGeometry(QRect(0, 90, 160, 22));
        zoom->setCursor(QCursor(Qt::ClosedHandCursor));
        zoom->setMaximum(100);
        zoom->setSliderPosition(100);
        zoom->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(groupBox);

        tabWidget->addTab(tab_source, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_source), QStringLiteral("Fonte"));
        tab_filters = new QWidget();
        tab_filters->setObjectName(QStringLiteral("tab_filters"));
        sizePolicy.setHeightForWidth(tab_filters->sizePolicy().hasHeightForWidth());
        tab_filters->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        tab_filters->setFont(font);
        verticalLayout_5 = new QVBoxLayout(tab_filters);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        filterWidget = new QWidget(tab_filters);
        filterWidget->setObjectName(QStringLiteral("filterWidget"));
        sizePolicy.setHeightForWidth(filterWidget->sizePolicy().hasHeightForWidth());
        filterWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(filterWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        contextualFilterWidget = new QWidget(filterWidget);
        contextualFilterWidget->setObjectName(QStringLiteral("contextualFilterWidget"));
        sizePolicy.setHeightForWidth(contextualFilterWidget->sizePolicy().hasHeightForWidth());
        contextualFilterWidget->setSizePolicy(sizePolicy);
        previa = new QGraphicsView(contextualFilterWidget);
        previa->setObjectName(QStringLiteral("previa"));
        previa->setGeometry(QRect(740, 100, 481, 381));
        previa->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        previa->setAutoFillBackground(false);
        previa->setStyleSheet(QLatin1String("QGraphicsView{\n"
"background: rgb(240, 240, 240)\n"
"\n"
"}"));
        previa->setFrameShape(QFrame::NoFrame);
        previa->setFrameShadow(QFrame::Plain);
        previa->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        previa->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        previa->setForegroundBrush(brush1);
        previa->setDragMode(QGraphicsView::NoDrag);
        previa->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        previa->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
        pushButton = new QPushButton(contextualFilterWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 70, 82, 17));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font1);
        pushButton->setCheckable(true);
        pushButton->setChecked(true);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(false);
        pushButton->setAutoDefault(true);
        pushButton->setDefault(false);

        verticalLayout_4->addWidget(contextualFilterWidget);

        actionConfirmApplyFilter = new QPushButton(filterWidget);
        actionConfirmApplyFilter->setObjectName(QStringLiteral("actionConfirmApplyFilter"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(actionConfirmApplyFilter->sizePolicy().hasHeightForWidth());
        actionConfirmApplyFilter->setSizePolicy(sizePolicy2);
        actionConfirmApplyFilter->setCursor(QCursor(Qt::PointingHandCursor));
        actionConfirmApplyFilter->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        verticalLayout_4->addWidget(actionConfirmApplyFilter);


        verticalLayout_5->addWidget(filterWidget);

        tabWidget->addTab(tab_filters, QString());
        tab_target = new QWidget();
        tab_target->setObjectName(QStringLiteral("tab_target"));
        sizePolicy.setHeightForWidth(tab_target->sizePolicy().hasHeightForWidth());
        tab_target->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(tab_target);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollArea2 = new QScrollArea(tab_target);
        scrollArea2->setObjectName(QStringLiteral("scrollArea2"));
        scrollArea2->setWidgetResizable(true);
        scrollAreaWidgetContents2 = new QWidget();
        scrollAreaWidgetContents2->setObjectName(QStringLiteral("scrollAreaWidgetContents2"));
        scrollAreaWidgetContents2->setGeometry(QRect(0, 0, 102, 120));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents2->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        actionCopyToSource = new QPushButton(scrollAreaWidgetContents2);
        actionCopyToSource->setObjectName(QStringLiteral("actionCopyToSource"));
        actionCopyToSource->setMinimumSize(QSize(84, 25));
        actionCopyToSource->setCursor(QCursor(Qt::PointingHandCursor));
        actionCopyToSource->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
""));

        verticalLayout_7->addWidget(actionCopyToSource);

        targetImageViewer = new QGraphicsView(scrollAreaWidgetContents2);
        targetImageViewer->setObjectName(QStringLiteral("targetImageViewer"));

        verticalLayout_7->addWidget(targetImageViewer);

        scrollArea2->setWidget(scrollAreaWidgetContents2);

        verticalLayout_6->addWidget(scrollArea2);

        tabWidget->addTab(tab_target, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1268, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Editor", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Abrir", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Salvar", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\303\201rea de Trabalho", 0));
        actionDownLayer->setText(QApplication::translate("MainWindow", "Descer", 0));
        actionAddLayer->setText(QApplication::translate("MainWindow", "+", 0));
        actionAddLayer->setShortcut(QApplication::translate("MainWindow", "Return", 0));
        actionUpLayer->setText(QApplication::translate("MainWindow", "Subir", 0));
        actionDelLayer->setText(QApplication::translate("MainWindow", "-", 0));
        actionDelLayer->setShortcut(QApplication::translate("MainWindow", "Backspace", 0));
        groupBox1->setTitle(QApplication::translate("MainWindow", "Filtros", 0));
        actionPlayFilter->setText(QApplication::translate("MainWindow", "Aplicar", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Pr\303\251via", 0));
        pushButton->setShortcut(QApplication::translate("MainWindow", "Return", 0));
        actionConfirmApplyFilter->setText(QApplication::translate("MainWindow", "Confirmar?", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_filters), QApplication::translate("MainWindow", "Filtros", 0));
        actionCopyToSource->setText(QApplication::translate("MainWindow", "Copiar para \303\201rea de Trabalho", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_target), QApplication::translate("MainWindow", "Sa\303\255da", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
