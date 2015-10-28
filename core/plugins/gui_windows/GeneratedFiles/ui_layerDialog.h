/********************************************************************************
** Form generated from reading UI file 'layerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERDIALOG_H
#define UI_LAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_layerDialog
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *modelTreeWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteModel;
    QPushButton *moveModelUp;
    QPushButton *moveModelDown;

    void setupUi(QDockWidget *layerDialog)
    {
        if (layerDialog->objectName().isEmpty())
            layerDialog->setObjectName(QStringLiteral("layerDialog"));
        layerDialog->resize(263, 781);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        modelTreeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        modelTreeWidget->setHeaderItem(__qtreewidgetitem);
        modelTreeWidget->setObjectName(QStringLiteral("modelTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(modelTreeWidget->sizePolicy().hasHeightForWidth());
        modelTreeWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(modelTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteModel = new QPushButton(dockWidgetContents);
        deleteModel->setObjectName(QStringLiteral("deleteModel"));

        horizontalLayout->addWidget(deleteModel);

        moveModelUp = new QPushButton(dockWidgetContents);
        moveModelUp->setObjectName(QStringLiteral("moveModelUp"));

        horizontalLayout->addWidget(moveModelUp);

        moveModelDown = new QPushButton(dockWidgetContents);
        moveModelDown->setObjectName(QStringLiteral("moveModelDown"));
        moveModelDown->setFlat(false);

        horizontalLayout->addWidget(moveModelDown);


        verticalLayout->addLayout(horizontalLayout);

        layerDialog->setWidget(dockWidgetContents);

        retranslateUi(layerDialog);

        QMetaObject::connectSlotsByName(layerDialog);
    } // setupUi

    void retranslateUi(QDockWidget *layerDialog)
    {
        layerDialog->setWindowTitle(QApplication::translate("layerDialog", "Layer Dialog", 0));
        deleteModel->setText(QApplication::translate("layerDialog", "-", 0));
        moveModelUp->setText(QApplication::translate("layerDialog", "\342\206\221", 0));
        moveModelDown->setText(QApplication::translate("layerDialog", "\342\206\223", 0));
    } // retranslateUi

};

namespace Ui {
    class layerDialog: public Ui_layerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERDIALOG_H
