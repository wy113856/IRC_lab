/********************************************************************************
** Form generated from reading UI file 'FilterDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDOCKWIDGET_H
#define UI_FILTERDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterDockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *filterDescription;
    QVBoxLayout *parametersLayout;
    QHBoxLayout *buttonsLayout;
    QPushButton *defaultButton;
    QPushButton *applyButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDockWidget *FilterDockWidget)
    {
        if (FilterDockWidget->objectName().isEmpty())
            FilterDockWidget->setObjectName(QStringLiteral("FilterDockWidget"));
        FilterDockWidget->resize(230, 184);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterDockWidget->sizePolicy().hasHeightForWidth());
        FilterDockWidget->setSizePolicy(sizePolicy);
        FilterDockWidget->setMinimumSize(QSize(230, 184));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        filterDescription = new QLabel(dockWidgetContents);
        filterDescription->setObjectName(QStringLiteral("filterDescription"));
        filterDescription->setWordWrap(true);

        verticalLayout->addWidget(filterDescription);

        parametersLayout = new QVBoxLayout();
        parametersLayout->setObjectName(QStringLiteral("parametersLayout"));

        verticalLayout->addLayout(parametersLayout);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
        defaultButton = new QPushButton(dockWidgetContents);
        defaultButton->setObjectName(QStringLiteral("defaultButton"));

        buttonsLayout->addWidget(defaultButton);

        applyButton = new QPushButton(dockWidgetContents);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        buttonsLayout->addWidget(applyButton);


        verticalLayout->addLayout(buttonsLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        FilterDockWidget->setWidget(dockWidgetContents);

        retranslateUi(FilterDockWidget);

        QMetaObject::connectSlotsByName(FilterDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *FilterDockWidget)
    {
        FilterDockWidget->setWindowTitle(QApplication::translate("FilterDockWidget", "Filter Name Here", 0));
        filterDescription->setText(QApplication::translate("FilterDockWidget", "The filter description goes here..", 0));
        defaultButton->setText(QApplication::translate("FilterDockWidget", "Defaults", 0));
        applyButton->setText(QApplication::translate("FilterDockWidget", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class FilterDockWidget: public Ui_FilterDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDOCKWIDGET_H
