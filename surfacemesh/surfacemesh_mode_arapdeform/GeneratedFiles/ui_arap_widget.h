/********************************************************************************
** Form generated from reading UI file 'arap_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARAP_WIDGET_H
#define UI_ARAP_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_arap_widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *manualAnchor;
    QRadioButton *distanceAnchor;
    QSlider *distanceSlider;
    QLabel *label;
    QSpinBox *numIterations;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *controlButton;
    QPushButton *anchorButton;
    QPushButton *deformButton;
    QButtonGroup *anchorModes;

    void setupUi(QWidget *arap_widget)
    {
        if (arap_widget->objectName().isEmpty())
            arap_widget->setObjectName(QStringLiteral("arap_widget"));
        arap_widget->resize(340, 175);
        verticalLayout = new QVBoxLayout(arap_widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        groupBox = new QGroupBox(arap_widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        manualAnchor = new QRadioButton(groupBox);
        anchorModes = new QButtonGroup(arap_widget);
        anchorModes->setObjectName(QStringLiteral("anchorModes"));
        anchorModes->addButton(manualAnchor);
        manualAnchor->setObjectName(QStringLiteral("manualAnchor"));
        manualAnchor->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, manualAnchor);

        distanceAnchor = new QRadioButton(groupBox);
        anchorModes->addButton(distanceAnchor);
        distanceAnchor->setObjectName(QStringLiteral("distanceAnchor"));
        distanceAnchor->setChecked(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, distanceAnchor);

        distanceSlider = new QSlider(groupBox);
        distanceSlider->setObjectName(QStringLiteral("distanceSlider"));
        distanceSlider->setEnabled(false);
        distanceSlider->setMaximum(100);
        distanceSlider->setValue(50);
        distanceSlider->setOrientation(Qt::Horizontal);
        distanceSlider->setTickPosition(QSlider::TicksBelow);

        formLayout->setWidget(1, QFormLayout::FieldRole, distanceSlider);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        numIterations = new QSpinBox(groupBox);
        numIterations->setObjectName(QStringLiteral("numIterations"));
        numIterations->setMinimum(1);
        numIterations->setMaximum(1024);
        numIterations->setValue(2);

        formLayout->setWidget(2, QFormLayout::FieldRole, numIterations);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        controlButton = new QPushButton(arap_widget);
        controlButton->setObjectName(QStringLiteral("controlButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/control_points.png"), QSize(), QIcon::Normal, QIcon::Off);
        controlButton->setIcon(icon);
        controlButton->setIconSize(QSize(36, 32));

        horizontalLayout_2->addWidget(controlButton);

        anchorButton = new QPushButton(arap_widget);
        anchorButton->setObjectName(QStringLiteral("anchorButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/anchor_points.png"), QSize(), QIcon::Normal, QIcon::Off);
        anchorButton->setIcon(icon1);
        anchorButton->setIconSize(QSize(36, 32));

        horizontalLayout_2->addWidget(anchorButton);

        deformButton = new QPushButton(arap_widget);
        deformButton->setObjectName(QStringLiteral("deformButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/deform.png"), QSize(), QIcon::Normal, QIcon::Off);
        deformButton->setIcon(icon2);
        deformButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(deformButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(arap_widget);

        QMetaObject::connectSlotsByName(arap_widget);
    } // setupUi

    void retranslateUi(QWidget *arap_widget)
    {
        arap_widget->setWindowTitle(QApplication::translate("arap_widget", "As-rigid-as-possible Deformation", 0));
        groupBox->setTitle(QApplication::translate("arap_widget", "Anchor type", 0));
        manualAnchor->setText(QApplication::translate("arap_widget", "Manually selected", 0));
        distanceAnchor->setText(QApplication::translate("arap_widget", "Distance", 0));
        label->setText(QApplication::translate("arap_widget", "Number of iterations", 0));
        controlButton->setText(QApplication::translate("arap_widget", "Control points", 0));
        anchorButton->setText(QApplication::translate("arap_widget", "Anchor points", 0));
        deformButton->setText(QApplication::translate("arap_widget", "Deform", 0));
    } // retranslateUi

};

namespace Ui {
    class arap_widget: public Ui_arap_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARAP_WIDGET_H
