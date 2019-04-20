/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNeu;
    QAction *actionNeu_aus_svg_Datei;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionNew;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *variantName;
    QLabel *startroundLabel;
    QSpinBox *startroundNumber;
    QLabel *buildModeLabel;
    QComboBox *buildMode;
    QLabel *displayModeLabel;
    QComboBox *displayMode;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *horizontalLayout_10;
    QLabel *tiletypeLabel;
    QHBoxLayout *horizontalLayout_8;
    QListView *tiletypeList;
    QVBoxLayout *verticalLayout_16;
    QPushButton *addTiletypeButton;
    QPushButton *editTiletypeButton;
    QPushButton *removeTiletypeButton;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QLabel *provinceLabel;
    QHBoxLayout *horizontalLayout_4;
    QListView *provinceList;
    QVBoxLayout *verticalLayout_8;
    QPushButton *loadProvinceButton;
    QPushButton *generateProvinceButton;
    QPushButton *clearProvinceButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *unittypeLabel;
    QHBoxLayout *horizontalLayout_7;
    QListView *unittypeList;
    QVBoxLayout *verticalLayout_14;
    QPushButton *addUnittypeButton;
    QPushButton *editUnittypeButton;
    QPushButton *removeUnittypeButton;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_17;
    QLabel *passthroughLabel;
    QHBoxLayout *horizontalLayout_9;
    QListView *passthroughList;
    QVBoxLayout *verticalLayout_18;
    QPushButton *addPassthroughButton;
    QPushButton *editPassthroughButton;
    QPushButton *removePassthroughButton;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *seasonLabel;
    QHBoxLayout *horizontalLayout_5;
    QListView *seasonList;
    QVBoxLayout *verticalLayout_10;
    QPushButton *addSeasonButton;
    QPushButton *editSeasonButton;
    QPushButton *removeSeasonButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *countryLabel;
    QHBoxLayout *horizontalLayout_6;
    QListView *countryList;
    QVBoxLayout *verticalLayout_12;
    QPushButton *addCountryButton;
    QPushButton *editCountryButton;
    QPushButton *removeCountryButton;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1128, 868);
        actionNeu = new QAction(MainWindow);
        actionNeu->setObjectName(QString::fromUtf8("actionNeu"));
        actionNeu_aus_svg_Datei = new QAction(MainWindow);
        actionNeu_aus_svg_Datei->setObjectName(QString::fromUtf8("actionNeu_aus_svg_Datei"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        variantName = new QLineEdit(centralWidget);
        variantName->setObjectName(QString::fromUtf8("variantName"));
        variantName->setFocusPolicy(Qt::WheelFocus);

        formLayout->setWidget(0, QFormLayout::FieldRole, variantName);

        startroundLabel = new QLabel(centralWidget);
        startroundLabel->setObjectName(QString::fromUtf8("startroundLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, startroundLabel);

        startroundNumber = new QSpinBox(centralWidget);
        startroundNumber->setObjectName(QString::fromUtf8("startroundNumber"));
        startroundNumber->setCursor(QCursor(Qt::ArrowCursor));
        startroundNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        startroundNumber->setMinimum(-4000);
        startroundNumber->setMaximum(4000);
        startroundNumber->setSingleStep(200);
        startroundNumber->setValue(1924);
        startroundNumber->setDisplayIntegerBase(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, startroundNumber);

        buildModeLabel = new QLabel(centralWidget);
        buildModeLabel->setObjectName(QString::fromUtf8("buildModeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, buildModeLabel);

        buildMode = new QComboBox(centralWidget);
        buildMode->addItem(QString());
        buildMode->addItem(QString());
        buildMode->setObjectName(QString::fromUtf8("buildMode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, buildMode);

        displayModeLabel = new QLabel(centralWidget);
        displayModeLabel->setObjectName(QString::fromUtf8("displayModeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, displayModeLabel);

        displayMode = new QComboBox(centralWidget);
        displayMode->addItem(QString());
        displayMode->addItem(QString());
        displayMode->setObjectName(QString::fromUtf8("displayMode"));
        displayMode->setEnabled(false);
        displayMode->setDuplicatesEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, displayMode);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_10);

        horizontalLayout_10 = new QVBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        tiletypeLabel = new QLabel(centralWidget);
        tiletypeLabel->setObjectName(QString::fromUtf8("tiletypeLabel"));

        horizontalLayout_10->addWidget(tiletypeLabel);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tiletypeList = new QListView(centralWidget);
        tiletypeList->setObjectName(QString::fromUtf8("tiletypeList"));

        horizontalLayout_8->addWidget(tiletypeList);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        addTiletypeButton = new QPushButton(centralWidget);
        addTiletypeButton->setObjectName(QString::fromUtf8("addTiletypeButton"));

        verticalLayout_16->addWidget(addTiletypeButton);

        editTiletypeButton = new QPushButton(centralWidget);
        editTiletypeButton->setObjectName(QString::fromUtf8("editTiletypeButton"));

        verticalLayout_16->addWidget(editTiletypeButton);

        removeTiletypeButton = new QPushButton(centralWidget);
        removeTiletypeButton->setObjectName(QString::fromUtf8("removeTiletypeButton"));

        verticalLayout_16->addWidget(removeTiletypeButton);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_8);


        horizontalLayout_8->addLayout(verticalLayout_16);


        horizontalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_10);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        provinceLabel = new QLabel(centralWidget);
        provinceLabel->setObjectName(QString::fromUtf8("provinceLabel"));

        verticalLayout_7->addWidget(provinceLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        provinceList = new QListView(centralWidget);
        provinceList->setObjectName(QString::fromUtf8("provinceList"));

        horizontalLayout_4->addWidget(provinceList);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        loadProvinceButton = new QPushButton(centralWidget);
        loadProvinceButton->setObjectName(QString::fromUtf8("loadProvinceButton"));

        verticalLayout_8->addWidget(loadProvinceButton);

        generateProvinceButton = new QPushButton(centralWidget);
        generateProvinceButton->setObjectName(QString::fromUtf8("generateProvinceButton"));

        verticalLayout_8->addWidget(generateProvinceButton);

        clearProvinceButton = new QPushButton(centralWidget);
        clearProvinceButton->setObjectName(QString::fromUtf8("clearProvinceButton"));

        verticalLayout_8->addWidget(clearProvinceButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        unittypeLabel = new QLabel(centralWidget);
        unittypeLabel->setObjectName(QString::fromUtf8("unittypeLabel"));

        verticalLayout_13->addWidget(unittypeLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        unittypeList = new QListView(centralWidget);
        unittypeList->setObjectName(QString::fromUtf8("unittypeList"));

        horizontalLayout_7->addWidget(unittypeList);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        addUnittypeButton = new QPushButton(centralWidget);
        addUnittypeButton->setObjectName(QString::fromUtf8("addUnittypeButton"));

        verticalLayout_14->addWidget(addUnittypeButton);

        editUnittypeButton = new QPushButton(centralWidget);
        editUnittypeButton->setObjectName(QString::fromUtf8("editUnittypeButton"));

        verticalLayout_14->addWidget(editUnittypeButton);

        removeUnittypeButton = new QPushButton(centralWidget);
        removeUnittypeButton->setObjectName(QString::fromUtf8("removeUnittypeButton"));

        verticalLayout_14->addWidget(removeUnittypeButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_7);


        horizontalLayout_7->addLayout(verticalLayout_14);


        verticalLayout_13->addLayout(horizontalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout_13);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        passthroughLabel = new QLabel(centralWidget);
        passthroughLabel->setObjectName(QString::fromUtf8("passthroughLabel"));

        verticalLayout_17->addWidget(passthroughLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        passthroughList = new QListView(centralWidget);
        passthroughList->setObjectName(QString::fromUtf8("passthroughList"));

        horizontalLayout_9->addWidget(passthroughList);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        addPassthroughButton = new QPushButton(centralWidget);
        addPassthroughButton->setObjectName(QString::fromUtf8("addPassthroughButton"));

        verticalLayout_18->addWidget(addPassthroughButton);

        editPassthroughButton = new QPushButton(centralWidget);
        editPassthroughButton->setObjectName(QString::fromUtf8("editPassthroughButton"));

        verticalLayout_18->addWidget(editPassthroughButton);

        removePassthroughButton = new QPushButton(centralWidget);
        removePassthroughButton->setObjectName(QString::fromUtf8("removePassthroughButton"));

        verticalLayout_18->addWidget(removePassthroughButton);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_9);


        horizontalLayout_9->addLayout(verticalLayout_18);


        verticalLayout_17->addLayout(horizontalLayout_9);


        horizontalLayout_2->addLayout(verticalLayout_17);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        seasonLabel = new QLabel(centralWidget);
        seasonLabel->setObjectName(QString::fromUtf8("seasonLabel"));

        verticalLayout_9->addWidget(seasonLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        seasonList = new QListView(centralWidget);
        seasonList->setObjectName(QString::fromUtf8("seasonList"));

        horizontalLayout_5->addWidget(seasonList);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        addSeasonButton = new QPushButton(centralWidget);
        addSeasonButton->setObjectName(QString::fromUtf8("addSeasonButton"));

        verticalLayout_10->addWidget(addSeasonButton);

        editSeasonButton = new QPushButton(centralWidget);
        editSeasonButton->setObjectName(QString::fromUtf8("editSeasonButton"));

        verticalLayout_10->addWidget(editSeasonButton);

        removeSeasonButton = new QPushButton(centralWidget);
        removeSeasonButton->setObjectName(QString::fromUtf8("removeSeasonButton"));

        verticalLayout_10->addWidget(removeSeasonButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);


        horizontalLayout_5->addLayout(verticalLayout_10);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_9);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        countryLabel = new QLabel(centralWidget);
        countryLabel->setObjectName(QString::fromUtf8("countryLabel"));

        verticalLayout_11->addWidget(countryLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        countryList = new QListView(centralWidget);
        countryList->setObjectName(QString::fromUtf8("countryList"));

        horizontalLayout_6->addWidget(countryList);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        addCountryButton = new QPushButton(centralWidget);
        addCountryButton->setObjectName(QString::fromUtf8("addCountryButton"));

        verticalLayout_12->addWidget(addCountryButton);

        editCountryButton = new QPushButton(centralWidget);
        editCountryButton->setObjectName(QString::fromUtf8("editCountryButton"));

        verticalLayout_12->addWidget(editCountryButton);

        removeCountryButton = new QPushButton(centralWidget);
        removeCountryButton->setObjectName(QString::fromUtf8("removeCountryButton"));

        verticalLayout_12->addWidget(removeCountryButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);


        horizontalLayout_6->addLayout(verticalLayout_12);


        verticalLayout_11->addLayout(horizontalLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_11);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1128, 26));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QString::fromUtf8("menuDatei"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(variantName);
        startroundLabel->setBuddy(startroundNumber);
        buildModeLabel->setBuddy(buildMode);
        displayModeLabel->setBuddy(displayMode);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuDatei->menuAction());
        menuDatei->addAction(actionNew);
        menuDatei->addAction(actionOpen);
        menuDatei->addSeparator();
        menuDatei->addAction(actionSave);
        menuDatei->addAction(actionSave_As);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNeu->setText(QApplication::translate("MainWindow", "Neu", nullptr));
        actionNeu_aus_svg_Datei->setText(QApplication::translate("MainWindow", "New from svg file", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New...", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Name", nullptr));
        startroundLabel->setText(QApplication::translate("MainWindow", "Startround Number", nullptr));
        buildModeLabel->setText(QApplication::translate("MainWindow", "Build Mode", nullptr));
        buildMode->setItemText(0, QApplication::translate("MainWindow", "home_centers_only", nullptr));
        buildMode->setItemText(1, QApplication::translate("MainWindow", "everywhere", nullptr));

        displayModeLabel->setText(QApplication::translate("MainWindow", "Display Mode", nullptr));
        displayMode->setItemText(0, QApplication::translate("MainWindow", "default", nullptr));
        displayMode->setItemText(1, QApplication::translate("MainWindow", "fog_of_war", nullptr));

        tiletypeLabel->setText(QApplication::translate("MainWindow", "Tiletypes", nullptr));
        addTiletypeButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        editTiletypeButton->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        removeTiletypeButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        provinceLabel->setText(QApplication::translate("MainWindow", "Provinces", nullptr));
        loadProvinceButton->setText(QApplication::translate("MainWindow", "Load from file", nullptr));
        generateProvinceButton->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        clearProvinceButton->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        unittypeLabel->setText(QApplication::translate("MainWindow", "Unit types", nullptr));
        addUnittypeButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        editUnittypeButton->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        removeUnittypeButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        passthroughLabel->setText(QApplication::translate("MainWindow", "Passthroughs", nullptr));
        addPassthroughButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        editPassthroughButton->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        removePassthroughButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        seasonLabel->setText(QApplication::translate("MainWindow", "Seasons", nullptr));
        addSeasonButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        editSeasonButton->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        removeSeasonButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        countryLabel->setText(QApplication::translate("MainWindow", "Countries", nullptr));
        addCountryButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        editCountryButton->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        removeCountryButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        menuDatei->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
