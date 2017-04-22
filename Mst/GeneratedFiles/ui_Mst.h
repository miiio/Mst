/********************************************************************************
** Form generated from reading UI file 'Mst.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MST_H
#define UI_MST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MstClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit_input;
    QPushButton *btn_ok;
    QPushButton *btn_save;
    QPushButton *btn_import;
    QLabel *label_2;
    QPushButton *btn_rand;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QLabel *label_graph;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_result;
    QLabel *label_result;
    QLabel *label_sum;
    QPushButton *btn_kruskal;
    QPushButton *btn_prim;
    QGroupBox *groupBox_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MstClass)
    {
        if (MstClass->objectName().isEmpty())
            MstClass->setObjectName(QStringLiteral("MstClass"));
        MstClass->resize(1086, 585);
        centralWidget = new QWidget(MstClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 321, 431));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(14);
        groupBox->setFont(font);
        textEdit_input = new QTextEdit(groupBox);
        textEdit_input->setObjectName(QStringLiteral("textEdit_input"));
        textEdit_input->setGeometry(QRect(20, 50, 141, 371));
        QFont font1;
        font1.setPointSize(16);
        textEdit_input->setFont(font1);
        textEdit_input->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        btn_ok = new QPushButton(groupBox);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(190, 50, 110, 40));
        btn_save = new QPushButton(groupBox);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(190, 110, 110, 41));
        btn_import = new QPushButton(groupBox);
        btn_import->setObjectName(QStringLiteral("btn_import"));
        btn_import->setGeometry(QRect(190, 170, 110, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 270, 101, 131));
        label_2->setMaximumSize(QSize(101, 16777215));
        btn_rand = new QPushButton(groupBox);
        btn_rand->setObjectName(QStringLiteral("btn_rand"));
        btn_rand->setGeometry(QRect(190, 230, 109, 40));
        QFont font2;
        font2.setPointSize(14);
        btn_rand->setFont(font2);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 20, 711, 540));
        groupBox_2->setFont(font);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 30, 241, 490));
        QFont font3;
        font3.setPointSize(10);
        groupBox_4->setFont(font3);
        label_graph = new QLabel(groupBox_4);
        label_graph->setObjectName(QStringLiteral("label_graph"));
        label_graph->setGeometry(QRect(20, 40, 201, 431));
        label_graph->setMouseTracking(false);
        label_graph->setScaledContents(true);
        label_graph->setWordWrap(false);
        label_graph->setOpenExternalLinks(false);
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(280, 30, 411, 491));
        groupBox_5->setFont(font3);
        textEdit_result = new QTextEdit(groupBox_5);
        textEdit_result->setObjectName(QStringLiteral("textEdit_result"));
        textEdit_result->setEnabled(true);
        textEdit_result->setGeometry(QRect(30, 40, 141, 390));
        textEdit_result->setFont(font1);
        textEdit_result->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_result->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_result->setUndoRedoEnabled(true);
        label_result = new QLabel(groupBox_5);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(200, 40, 191, 431));
        label_result->setScaledContents(true);
        label_sum = new QLabel(groupBox_5);
        label_sum->setObjectName(QStringLiteral("label_sum"));
        label_sum->setGeometry(QRect(30, 450, 161, 21));
        label_sum->setFont(font2);
        btn_kruskal = new QPushButton(centralWidget);
        btn_kruskal->setObjectName(QStringLiteral("btn_kruskal"));
        btn_kruskal->setGeometry(QRect(70, 500, 90, 40));
        btn_prim = new QPushButton(centralWidget);
        btn_prim->setObjectName(QStringLiteral("btn_prim"));
        btn_prim->setGeometry(QRect(190, 500, 100, 41));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 460, 321, 101));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font4.setPointSize(12);
        groupBox_3->setFont(font4);
        MstClass->setCentralWidget(centralWidget);
        groupBox_3->raise();
        groupBox->raise();
        groupBox_2->raise();
        btn_kruskal->raise();
        btn_prim->raise();
        statusBar = new QStatusBar(MstClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MstClass->setStatusBar(statusBar);

        retranslateUi(MstClass);
        QObject::connect(btn_import, SIGNAL(clicked()), MstClass, SLOT(btnSaveClick()));
        QObject::connect(btn_save, SIGNAL(clicked()), MstClass, SLOT(btnLoadClick()));
        QObject::connect(btn_ok, SIGNAL(clicked()), MstClass, SLOT(btnOkClick()));
        QObject::connect(btn_rand, SIGNAL(clicked()), MstClass, SLOT(btnRandClick()));
        QObject::connect(btn_prim, SIGNAL(clicked()), MstClass, SLOT(btnPrimClick()));
        QObject::connect(btn_kruskal, SIGNAL(clicked()), MstClass, SLOT(btnKrusalClick()));

        QMetaObject::connectSlotsByName(MstClass);
    } // setupUi

    void retranslateUi(QMainWindow *MstClass)
    {
        MstClass->setWindowTitle(QApplication::translate("MstClass", "Mst", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MstClass", "\350\276\223\345\205\245", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("MstClass", "\347\241\256\345\256\232", Q_NULLPTR));
        btn_save->setText(QApplication::translate("MstClass", "\345\257\274\345\205\245", Q_NULLPTR));
        btn_import->setText(QApplication::translate("MstClass", "\345\257\274\345\207\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("MstClass", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\240\274\345\274\217:\351\231\220\346\225\260\345\255\227</span></p><p><span style=\" font-size:11pt;\">a b v</span></p><p><span style=\" font-size:11pt;\">\346\257\217\350\241\214\344\270\200\346\235\241\350\276\271</span></p></body></html>", Q_NULLPTR));
        btn_rand->setText(QApplication::translate("MstClass", "\346\240\267\344\276\213", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MstClass", "\350\276\223\345\207\272", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MstClass", "\345\216\237\345\233\276", Q_NULLPTR));
        label_graph->setText(QApplication::translate("MstClass", "\351\242\204\350\247\210", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MstClass", "\347\273\223\346\236\234", Q_NULLPTR));
        label_result->setText(QApplication::translate("MstClass", "\350\276\223\345\207\272", Q_NULLPTR));
        label_sum->setText(QApplication::translate("MstClass", "Mst:", Q_NULLPTR));
        btn_kruskal->setText(QApplication::translate("MstClass", "Kruskal", Q_NULLPTR));
        btn_prim->setText(QApplication::translate("MstClass", "Prim", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MstClass", "\350\256\241\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MstClass: public Ui_MstClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MST_H
