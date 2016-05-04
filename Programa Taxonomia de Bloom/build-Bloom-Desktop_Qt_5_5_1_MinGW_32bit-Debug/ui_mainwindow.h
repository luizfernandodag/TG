/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bloom
{
public:
    QAction *actionMenu;
    QAction *actionAaa;
    QAction *actionA;
    QAction *actionAa;
    QAction *actionA_2;
    QAction *actionA_3;
    QAction *actionSalvar;
    QWidget *centralWidget;
    QTabWidget *produto_visual;
    QWidget *tabProcessoCognitivo;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *nivel1Conhecimento;
    QTextBrowser *textBrowser_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *nivel2Compreensao;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QComboBox *nivel3Aplicacao;
    QTextBrowser *textBrowser_3;
    QVBoxLayout *verticalLayout_23;
    QComboBox *nivel4Analise;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QComboBox *nivel5Avaliacao;
    QTextBrowser *textBrowser_5;
    QVBoxLayout *verticalLayout_6;
    QComboBox *nivel6Criacao;
    QTextBrowser *textBrowser_6;
    QWidget *tabConteudo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QComboBox *conteudo_profundidade;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QComboBox *conteudo_complexidade;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_19;
    QRadioButton *radioButtonConteudo;
    QHBoxLayout *horizontalLayout_10;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *conteudo_imperativo;
    QComboBox *conteudo_imperativo_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QComboBox *conteudo_palavrasChave;
    QWidget *tabRecursos;
    QRadioButton *radioButtonRecursos;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_12;
    QComboBox *recursos_Offline;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_13;
    QComboBox *recursos_online;
    QWidget *tabProdutos;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_14;
    QComboBox *produto_grafico;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_15;
    QComboBox *produto_construcao;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_16;
    QComboBox *produto_oral;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_17;
    QComboBox *produto_multimidia;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_18;
    QComboBox *produto_escrito;
    QRadioButton *radioButtonProdutos;
    QWidget *tab;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_19;
    QSpinBox *spinBoxNumIntegrantesGrupo;
    QTextEdit *frase;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_21;
    QLineEdit *lineEditConteudo_2;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_20;
    QLineEdit *lineEditConteudo;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_3;
    QMenuBar *menuBar;
    QMenu *menuOI;
    QMenu *menuAjuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Bloom)
    {
        if (Bloom->objectName().isEmpty())
            Bloom->setObjectName(QStringLiteral("Bloom"));
        Bloom->resize(1202, 692);
        actionMenu = new QAction(Bloom);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionAaa = new QAction(Bloom);
        actionAaa->setObjectName(QStringLiteral("actionAaa"));
        actionA = new QAction(Bloom);
        actionA->setObjectName(QStringLiteral("actionA"));
        actionAa = new QAction(Bloom);
        actionAa->setObjectName(QStringLiteral("actionAa"));
        actionA_2 = new QAction(Bloom);
        actionA_2->setObjectName(QStringLiteral("actionA_2"));
        actionA_3 = new QAction(Bloom);
        actionA_3->setObjectName(QStringLiteral("actionA_3"));
        actionSalvar = new QAction(Bloom);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        centralWidget = new QWidget(Bloom);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        produto_visual = new QTabWidget(centralWidget);
        produto_visual->setObjectName(QStringLiteral("produto_visual"));
        produto_visual->setGeometry(QRect(20, 200, 1121, 421));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        produto_visual->setFont(font);
        tabProcessoCognitivo = new QWidget();
        tabProcessoCognitivo->setObjectName(QStringLiteral("tabProcessoCognitivo"));
        label_7 = new QLabel(tabProcessoCognitivo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 20, 471, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setUnderline(true);
        label_7->setFont(font1);
        layoutWidget = new QWidget(tabProcessoCognitivo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 77, 1021, 301));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nivel1Conhecimento = new QComboBox(layoutWidget);
        nivel1Conhecimento->setObjectName(QStringLiteral("nivel1Conhecimento"));

        verticalLayout->addWidget(nivel1Conhecimento);

        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout->addWidget(textBrowser_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nivel2Compreensao = new QComboBox(layoutWidget);
        nivel2Compreensao->setObjectName(QStringLiteral("nivel2Compreensao"));

        verticalLayout_2->addWidget(nivel2Compreensao);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_13->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        nivel3Aplicacao = new QComboBox(layoutWidget);
        nivel3Aplicacao->setObjectName(QStringLiteral("nivel3Aplicacao"));

        verticalLayout_4->addWidget(nivel3Aplicacao);

        textBrowser_3 = new QTextBrowser(layoutWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        verticalLayout_4->addWidget(textBrowser_3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        nivel4Analise = new QComboBox(layoutWidget);
        nivel4Analise->setObjectName(QStringLiteral("nivel4Analise"));

        verticalLayout_23->addWidget(nivel4Analise);

        textBrowser_4 = new QTextBrowser(layoutWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        verticalLayout_23->addWidget(textBrowser_4);


        horizontalLayout_2->addLayout(verticalLayout_23);


        horizontalLayout_13->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        nivel5Avaliacao = new QComboBox(layoutWidget);
        nivel5Avaliacao->setObjectName(QStringLiteral("nivel5Avaliacao"));

        verticalLayout_5->addWidget(nivel5Avaliacao);

        textBrowser_5 = new QTextBrowser(layoutWidget);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));

        verticalLayout_5->addWidget(textBrowser_5);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        nivel6Criacao = new QComboBox(layoutWidget);
        nivel6Criacao->setObjectName(QStringLiteral("nivel6Criacao"));

        verticalLayout_6->addWidget(nivel6Criacao);

        textBrowser_6 = new QTextBrowser(layoutWidget);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));

        verticalLayout_6->addWidget(textBrowser_6);


        horizontalLayout_3->addLayout(verticalLayout_6);


        horizontalLayout_13->addLayout(horizontalLayout_3);

        produto_visual->addTab(tabProcessoCognitivo, QString());
        tabConteudo = new QWidget();
        tabConteudo->setObjectName(QStringLiteral("tabConteudo"));
        layoutWidget1 = new QWidget(tabConteudo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 100, 217, 57));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QStringLiteral(""));

        verticalLayout_7->addWidget(label_8);

        conteudo_profundidade = new QComboBox(layoutWidget1);
        conteudo_profundidade->setObjectName(QStringLiteral("conteudo_profundidade"));

        verticalLayout_7->addWidget(conteudo_profundidade);

        layoutWidget2 = new QWidget(tabConteudo);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(300, 100, 225, 61));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAutoFillBackground(false);
        label_9->setStyleSheet(QStringLiteral(""));

        verticalLayout_8->addWidget(label_9);

        conteudo_complexidade = new QComboBox(layoutWidget2);
        conteudo_complexidade->setObjectName(QStringLiteral("conteudo_complexidade"));

        verticalLayout_8->addWidget(conteudo_complexidade);

        layoutWidget3 = new QWidget(tabConteudo);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(370, 20, 257, 55));
        verticalLayout_19 = new QVBoxLayout(layoutWidget3);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        radioButtonConteudo = new QRadioButton(layoutWidget3);
        radioButtonConteudo->setObjectName(QStringLiteral("radioButtonConteudo"));

        verticalLayout_19->addWidget(radioButtonConteudo);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));

        verticalLayout_19->addLayout(horizontalLayout_10);

        layoutWidget4 = new QWidget(tabConteudo);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(540, 100, 299, 53));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        conteudo_imperativo = new QLabel(layoutWidget4);
        conteudo_imperativo->setObjectName(QStringLiteral("conteudo_imperativo"));
        conteudo_imperativo->setAutoFillBackground(false);
        conteudo_imperativo->setStyleSheet(QStringLiteral(""));

        verticalLayout_9->addWidget(conteudo_imperativo);

        conteudo_imperativo_2 = new QComboBox(layoutWidget4);
        conteudo_imperativo_2->setObjectName(QStringLiteral("conteudo_imperativo_2"));

        verticalLayout_9->addWidget(conteudo_imperativo_2);


        horizontalLayout_5->addLayout(verticalLayout_9);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAutoFillBackground(false);
        label_11->setStyleSheet(QStringLiteral(""));

        verticalLayout_10->addWidget(label_11);

        conteudo_palavrasChave = new QComboBox(layoutWidget4);
        conteudo_palavrasChave->setObjectName(QStringLiteral("conteudo_palavrasChave"));

        verticalLayout_10->addWidget(conteudo_palavrasChave);


        horizontalLayout_4->addLayout(verticalLayout_10);

        produto_visual->addTab(tabConteudo, QString());
        tabRecursos = new QWidget();
        tabRecursos->setObjectName(QStringLiteral("tabRecursos"));
        radioButtonRecursos = new QRadioButton(tabRecursos);
        radioButtonRecursos->setObjectName(QStringLiteral("radioButtonRecursos"));
        radioButtonRecursos->setGeometry(QRect(400, 20, 253, 21));
        layoutWidget_2 = new QWidget(tabRecursos);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 70, 412, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAutoFillBackground(false);
        label_12->setStyleSheet(QStringLiteral(""));

        verticalLayout_11->addWidget(label_12);

        recursos_Offline = new QComboBox(layoutWidget_2);
        recursos_Offline->setObjectName(QStringLiteral("recursos_Offline"));

        verticalLayout_11->addWidget(recursos_Offline);


        horizontalLayout_6->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAutoFillBackground(false);
        label_13->setStyleSheet(QStringLiteral(""));

        verticalLayout_12->addWidget(label_13);

        recursos_online = new QComboBox(layoutWidget_2);
        recursos_online->setObjectName(QStringLiteral("recursos_online"));

        verticalLayout_12->addWidget(recursos_online);


        horizontalLayout_6->addLayout(verticalLayout_12);

        produto_visual->addTab(tabRecursos, QString());
        tabProdutos = new QWidget();
        tabProdutos->setObjectName(QStringLiteral("tabProdutos"));
        layoutWidget5 = new QWidget(tabProdutos);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(90, 80, 1083, 111));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_14 = new QLabel(layoutWidget5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAutoFillBackground(false);
        label_14->setStyleSheet(QStringLiteral(""));

        verticalLayout_13->addWidget(label_14);

        produto_grafico = new QComboBox(layoutWidget5);
        produto_grafico->setObjectName(QStringLiteral("produto_grafico"));

        verticalLayout_13->addWidget(produto_grafico);


        horizontalLayout_8->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAutoFillBackground(false);
        label_15->setStyleSheet(QStringLiteral(""));

        verticalLayout_14->addWidget(label_15);

        produto_construcao = new QComboBox(layoutWidget5);
        produto_construcao->setObjectName(QStringLiteral("produto_construcao"));

        verticalLayout_14->addWidget(produto_construcao);


        horizontalLayout_8->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_16 = new QLabel(layoutWidget5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAutoFillBackground(false);
        label_16->setStyleSheet(QStringLiteral(""));

        verticalLayout_15->addWidget(label_16);

        produto_oral = new QComboBox(layoutWidget5);
        produto_oral->setObjectName(QStringLiteral("produto_oral"));

        verticalLayout_15->addWidget(produto_oral);


        horizontalLayout_8->addLayout(verticalLayout_15);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_17 = new QLabel(layoutWidget5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAutoFillBackground(false);
        label_17->setStyleSheet(QStringLiteral(""));

        verticalLayout_16->addWidget(label_17);

        produto_multimidia = new QComboBox(layoutWidget5);
        produto_multimidia->setObjectName(QStringLiteral("produto_multimidia"));

        verticalLayout_16->addWidget(produto_multimidia);


        horizontalLayout_7->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAutoFillBackground(false);
        label_18->setStyleSheet(QStringLiteral(""));

        verticalLayout_17->addWidget(label_18);

        produto_escrito = new QComboBox(layoutWidget5);
        produto_escrito->setObjectName(QStringLiteral("produto_escrito"));

        verticalLayout_17->addWidget(produto_escrito);


        horizontalLayout_7->addLayout(verticalLayout_17);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        radioButtonProdutos = new QRadioButton(tabProdutos);
        radioButtonProdutos->setObjectName(QStringLiteral("radioButtonProdutos"));
        radioButtonProdutos->setGeometry(QRect(390, 20, 253, 21));
        produto_visual->addTab(tabProdutos, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget_3 = new QWidget(tab);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(380, 30, 243, 49));
        verticalLayout_18 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAutoFillBackground(false);
        label_19->setStyleSheet(QStringLiteral(""));

        verticalLayout_18->addWidget(label_19);

        spinBoxNumIntegrantesGrupo = new QSpinBox(layoutWidget_3);
        spinBoxNumIntegrantesGrupo->setObjectName(QStringLiteral("spinBoxNumIntegrantesGrupo"));
        spinBoxNumIntegrantesGrupo->setMinimum(1);

        verticalLayout_18->addWidget(spinBoxNumIntegrantesGrupo);

        produto_visual->addTab(tab, QString());
        frase = new QTextEdit(centralWidget);
        frase->setObjectName(QStringLiteral("frase"));
        frase->setGeometry(QRect(160, 90, 741, 101));
        QFont font2;
        font2.setPointSize(14);
        frase->setFont(font2);
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(250, 0, 243, 81));
        verticalLayout_24 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        QFont font3;
        font3.setPointSize(10);
        label_21->setFont(font3);

        verticalLayout_24->addWidget(label_21);

        lineEditConteudo_2 = new QLineEdit(layoutWidget_4);
        lineEditConteudo_2->setObjectName(QStringLiteral("lineEditConteudo_2"));

        verticalLayout_24->addWidget(lineEditConteudo_2);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(530, 0, 245, 81));
        verticalLayout_22 = new QVBoxLayout(layoutWidget6);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font3);

        verticalLayout_22->addWidget(label_20);

        lineEditConteudo = new QLineEdit(layoutWidget6);
        lineEditConteudo->setObjectName(QStringLiteral("lineEditConteudo"));

        verticalLayout_22->addWidget(lineEditConteudo);

        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_3 = new QVBoxLayout(layoutWidget7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Bloom->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        produto_visual->raise();
        frase->raise();
        layoutWidget_4->raise();
        menuBar = new QMenuBar(Bloom);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1202, 27));
        menuOI = new QMenu(menuBar);
        menuOI->setObjectName(QStringLiteral("menuOI"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        Bloom->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Bloom);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Bloom->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Bloom);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Bloom->setStatusBar(statusBar);

        menuBar->addAction(menuOI->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuOI->addAction(actionSalvar);

        retranslateUi(Bloom);

        produto_visual->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Bloom);
    } // setupUi

    void retranslateUi(QMainWindow *Bloom)
    {
        Bloom->setWindowTitle(QApplication::translate("Bloom", "MainWindow", 0));
        actionMenu->setText(QApplication::translate("Bloom", "aaaaaaaaaaaa", 0));
        actionAaa->setText(QApplication::translate("Bloom", "aaa", 0));
        actionA->setText(QApplication::translate("Bloom", "a", 0));
        actionAa->setText(QApplication::translate("Bloom", "aa", 0));
        actionA_2->setText(QApplication::translate("Bloom", "a", 0));
        actionA_3->setText(QApplication::translate("Bloom", "a", 0));
        actionSalvar->setText(QApplication::translate("Bloom", "Salvar", 0));
        label_7->setText(QApplication::translate("Bloom", "Dimens\303\265es do processo cognitivo", 0));
        nivel1Conhecimento->clear();
        nivel1Conhecimento->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "definir", 0)
         << QApplication::translate("Bloom", "denominar", 0)
         << QApplication::translate("Bloom", "enumerar", 0)
         << QApplication::translate("Bloom", "relembrar", 0)
         << QApplication::translate("Bloom", "recordar", 0)
         << QApplication::translate("Bloom", "nomear", 0)
         << QApplication::translate("Bloom", "lembrar", "aaaaaaaaaaaaaaaaaaaa")
         << QApplication::translate("Bloom", "listar", 0)
         << QApplication::translate("Bloom", "definir", 0)
         << QApplication::translate("Bloom", "expor", 0)
         << QApplication::translate("Bloom", "repetir", 0)
         << QApplication::translate("Bloom", "duplicar", 0)
        );
        textBrowser_2->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">1. CONHECIMENTO:</span><span style=\" font-size:7pt; font-weight:400;\"> Processos que requerem que o estudante reproduza com exatid\303\243o uma informa\303\247\303\243o que lhe tenha sido dada, seja ela uma data, um relato, um procedimento, uma f\303\263rmula ou uma teoria.</span></p></body></html>", 0));
        nivel2Compreensao->clear();
        nivel2Compreensao->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "classificar", 0)
         << QApplication::translate("Bloom", "descrever", 0)
         << QApplication::translate("Bloom", "discutir", 0)
         << QApplication::translate("Bloom", "explicar", 0)
         << QApplication::translate("Bloom", "identificar", 0)
         << QApplication::translate("Bloom", "localizar", 0)
         << QApplication::translate("Bloom", "reconhecer", 0)
         << QApplication::translate("Bloom", "reportar", 0)
         << QApplication::translate("Bloom", "selecionar", 0)
         << QApplication::translate("Bloom", "traduzir", 0)
         << QApplication::translate("Bloom", "parafrasear", 0)
        );
        textBrowser->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">2. COMPREENS\303\203O: </span><span style=\" font-family:'Times New Roman'; font-size:7pt; font-weight:400; color:#000000; background-color:#fefed6;\">requer elabora\303\247\303\243o (modifica\303\247\303\243o) de um dado ou informa\303\247\303\243o original. O estudante dever\303\241 ser capaz de usar uma informa\303\247\303\243o original e ampli\303\241-la, reduz\303\255-la, represent\303\241-la de outra forma ou prever consequ\303\252ncias resultantes da informa\303\247\303\243o original.</span></p></body></html>", 0));
        nivel3Aplicacao->clear();
        nivel3Aplicacao->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "escolher", 0)
         << QApplication::translate("Bloom", "resolver", 0)
         << QApplication::translate("Bloom", "demonstrar", 0)
         << QApplication::translate("Bloom", "programar", 0)
         << QApplication::translate("Bloom", "dramatizar", 0)
         << QApplication::translate("Bloom", "empregar", 0)
         << QApplication::translate("Bloom", "ilustrar", 0)
         << QApplication::translate("Bloom", "interpretar", 0)
         << QApplication::translate("Bloom", "operar", 0)
         << QApplication::translate("Bloom", "esbo\303\247ar", 0)
         << QApplication::translate("Bloom", "usar", 0)
         << QApplication::translate("Bloom", "planejar", 0)
        );
        textBrowser_3->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman'; font-size:8pt; color:#000000; background-color:#fefed6;\">3. APLICA\303\207\303\203O: </span><span style=\" font-family:'Times New Roman'; font-size:8pt; font-weight:400; color:#000000; background-color:#fefed6;\">reune processos nos quais o estudante transporta uma informa\303\247\303\243o gen\303\251rica para uma situa\303\247\303\243o nova e espec\303\255fica.</span></p></body></html>", 0));
        nivel4Analise->clear();
        nivel4Analise->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "avaliar", 0)
         << QApplication::translate("Bloom", "comparar", 0)
         << QApplication::translate("Bloom", "contrastar", 0)
         << QApplication::translate("Bloom", "criticar", 0)
         << QApplication::translate("Bloom", "diferenciar", 0)
         << QApplication::translate("Bloom", "discriminar", 0)
         << QApplication::translate("Bloom", "distinguir", 0)
         << QApplication::translate("Bloom", "examinar", 0)
         << QApplication::translate("Bloom", "experimentar", 0)
         << QApplication::translate("Bloom", "questionar", 0)
        );
        textBrowser_4->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#000000; background-color:#fefed6;\">4. AN\303\201LISE: </span><span style=\" font-family:'Times New Roman'; font-size:8pt; font-weight:400; color:#000000; background-color:#fefed6;\">caracterizam-se por separar uma informa\303\247\303\243o em elementos componentes e estabelecer rela\303\247\303\265es entre eles.</span></p></body></html>", 0));
        nivel5Avaliacao->clear();
        nivel5Avaliacao->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "avaliar", 0)
         << QApplication::translate("Bloom", "argumentar", 0)
         << QApplication::translate("Bloom", "constratar", 0)
         << QApplication::translate("Bloom", "defender", 0)
         << QApplication::translate("Bloom", "julgar", 0)
         << QApplication::translate("Bloom", "selecionar", 0)
         << QApplication::translate("Bloom", "apoiar", 0)
        );
        textBrowser_5->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#000000;\">5. AVALIA\303\207\303\203O: </span><span style=\" font-family:'Times New Roman'; font-size:8pt; font-weight:400; color:#000000;\">representa os processos cognitivos mais complexos. Consiste em confrontar um dado, uma informa\303\247\303\243o, uma teoria, um produto etc... com um crit\303\251rio ou conjunto de crit\303\251rios, que podem ser internos ao pr\303\263prio objeto de avalia\303\247\303\243o, ou externos a ele.</span></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"><br /></span></p></body></html>", 0));
        nivel6Criacao->clear();
        nivel6Criacao->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "construir", 0)
         << QApplication::translate("Bloom", "escrever", 0)
         << QApplication::translate("Bloom", "montar", 0)
         << QApplication::translate("Bloom", "integrar", 0)
         << QApplication::translate("Bloom", "projetar", 0)
         << QApplication::translate("Bloom", "desenvolver", 0)
         << QApplication::translate("Bloom", "formular", 0)
        );
        textBrowser_6->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.064pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. CRIA\303\207\303\203O: <span style=\" font-weight:400;\">o estudante \303\251 capaz de empregar n\303\255veis superios de racionc\303\255nio e habilidades de solu\303\247\303\243o de problemas em aplica\303\247\303\265es diretas no mundo real</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", 0));
        produto_visual->setTabText(produto_visual->indexOf(tabProcessoCognitivo), QApplication::translate("Bloom", "Processo Cognitivo", 0));
        label_8->setText(QApplication::translate("Bloom", "Profundidade", 0));
        conteudo_profundidade->clear();
        conteudo_profundidade->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "a no\303\247\303\243o geral", 0)
         << QApplication::translate("Bloom", "as quest\303\265es n\303\243o resolvidas", 0)
         << QApplication::translate("Bloom", "a \303\251tica", 0)
         << QApplication::translate("Bloom", "os padr\303\265es", 0)
         << QApplication::translate("Bloom", "as regras", 0)
         << QApplication::translate("Bloom", "os detalhes ess\303\252nciais", 0)
         << QApplication::translate("Bloom", "a tend\303\252ncia", 0)
        );
        label_9->setText(QApplication::translate("Bloom", "Complexidade", 0));
        conteudo_complexidade->clear();
        conteudo_complexidade->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "os m\303\272ltiplos pontos de vista", 0)
         << QApplication::translate("Bloom", "a mudan\303\247a com o tempo", 0)
         << QApplication::translate("Bloom", "pelas disciplinas", 0)
        );
        radioButtonConteudo->setText(QApplication::translate("Bloom", "Usarei especificador de amplitude", 0));
        conteudo_imperativo->setText(QApplication::translate("Bloom", "Imperativos", 0));
        conteudo_imperativo_2->clear();
        conteudo_imperativo_2->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "a origem", 0)
         << QApplication::translate("Bloom", "a converg\303\252ncia", 0)
         << QApplication::translate("Bloom", "os paralelos", 0)
         << QApplication::translate("Bloom", "o paradoxo", 0)
         << QApplication::translate("Bloom", "a contribui\303\247\303\243o", 0)
        );
        label_11->setText(QApplication::translate("Bloom", "Palavras Chave", 0));
        conteudo_palavrasChave->clear();
        conteudo_palavrasChave->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "as consegu\303\252ncias", 0)
         << QApplication::translate("Bloom", "as motiva\303\247\303\265es", 0)
         << QApplication::translate("Bloom", "as implica\303\247\303\265es", 0)
         << QApplication::translate("Bloom", "a signific\303\242ncia", 0)
        );
        produto_visual->setTabText(produto_visual->indexOf(tabConteudo), QApplication::translate("Bloom", "Amplitude", 0));
        radioButtonRecursos->setText(QApplication::translate("Bloom", "Usarei especificador de recursos", 0));
        label_12->setText(QApplication::translate("Bloom", "Recursos Offline", 0));
        recursos_Offline->clear();
        recursos_Offline->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "livro", 0)
         << QApplication::translate("Bloom", "revista", 0)
         << QApplication::translate("Bloom", "jornal", 0)
         << QApplication::translate("Bloom", "entrevista", 0)
         << QApplication::translate("Bloom", "enciclop\303\251dia", 0)
         << QApplication::translate("Bloom", "especialista", 0)
        );
        label_13->setText(QApplication::translate("Bloom", "Recursos Online", 0));
        recursos_online->clear();
        recursos_online->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "site", 0)
         << QApplication::translate("Bloom", "wikipedia", 0)
         << QApplication::translate("Bloom", "enciclop\303\251dia online", 0)
         << QApplication::translate("Bloom", "jornal", 0)
         << QApplication::translate("Bloom", "artigo", 0)
         << QApplication::translate("Bloom", "especialista", 0)
        );
        produto_visual->setTabText(produto_visual->indexOf(tabRecursos), QApplication::translate("Bloom", "Recursos", 0));
        label_14->setText(QApplication::translate("Bloom", "Visual", 0));
        produto_grafico->clear();
        produto_grafico->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "um gr\303\241fico", 0)
         << QApplication::translate("Bloom", "um desenho", 0)
         << QApplication::translate("Bloom", "uma linha do tempo", 0)
         << QApplication::translate("Bloom", "um diagrama", 0)
         << QApplication::translate("Bloom", "um mapa", 0)
         << QApplication::translate("Bloom", "um quadrinho", 0)
         << QApplication::translate("Bloom", "uma capa de livro", 0)
         << QApplication::translate("Bloom", "um poster", 0)
        );
        label_15->setText(QApplication::translate("Bloom", "Constru\303\247\303\243o", 0));
        produto_construcao->clear();
        produto_construcao->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "um modelo", 0)
         << QApplication::translate("Bloom", "uma escultura", 0)
         << QApplication::translate("Bloom", "um diorama", 0)
         << QApplication::translate("Bloom", "uma miniatura", 0)
         << QApplication::translate("Bloom", "uma galeria de arte", 0)
         << QApplication::translate("Bloom", "uma exibi\303\247\303\243o num museu", 0)
         << QApplication::translate("Bloom", "um mobil", 0)
        );
        label_16->setText(QApplication::translate("Bloom", "Oral", 0));
        produto_oral->clear();
        produto_oral->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "um debate", 0)
         << QApplication::translate("Bloom", "um pa\303\255nel de discuss\303\243o", 0)
         << QApplication::translate("Bloom", "uma aula", 0)
         << QApplication::translate("Bloom", "um relat\303\263rio", 0)
         << QApplication::translate("Bloom", "um jogo", 0)
         << QApplication::translate("Bloom", "uma pe\303\247a de teatro", 0)
         << QApplication::translate("Bloom", "uma confer\303\252ncia de imprensa", 0)
         << QApplication::translate("Bloom", "um programa de entrevista", 0)
         << QApplication::translate("Bloom", "um mon\303\263logo", 0)
         << QApplication::translate("Bloom", "uma resenha de filme", 0)
        );
        label_17->setText(QApplication::translate("Bloom", "Multim\303\255dia", 0));
        produto_multimidia->clear();
        produto_multimidia->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "uma m\303\272sica", 0)
         << QApplication::translate("Bloom", "um livro ilustrado", 0)
         << QApplication::translate("Bloom", "um jornal", 0)
         << QApplication::translate("Bloom", "um programa de tv", 0)
         << QApplication::translate("Bloom", "um PowerPoint", 0)
         << QApplication::translate("Bloom", "uma poesia em v\303\255deo", 0)
         << QApplication::translate("Bloom", "um ensaio fotogr\303\241fico", 0)
         << QApplication::translate("Bloom", "um website", 0)
         << QApplication::translate("Bloom", "um relat\303\263rio de viagem em v\303\255deo", 0)
         << QApplication::translate("Bloom", "uma reportagem", 0)
        );
        label_18->setText(QApplication::translate("Bloom", "Escrito", 0));
        produto_escrito->clear();
        produto_escrito->insertItems(0, QStringList()
         << QApplication::translate("Bloom", "um relat\303\263rio", 0)
         << QApplication::translate("Bloom", "um artigo", 0)
         << QApplication::translate("Bloom", "um ensaio persuasivo", 0)
         << QApplication::translate("Bloom", "uma sequ\303\252ncia", 0)
         << QApplication::translate("Bloom", "uma carta", 0)
         << QApplication::translate("Bloom", "uma hist\303\263ria infantil", 0)
         << QApplication::translate("Bloom", "um poema", 0)
         << QApplication::translate("Bloom", "uma m\303\272sica", 0)
         << QApplication::translate("Bloom", "um poema/m\303\272sica", 0)
         << QApplication::translate("Bloom", "um elogio", 0)
         << QApplication::translate("Bloom", "um di\303\241rio", 0)
         << QApplication::translate("Bloom", "uma revis\303\243o", 0)
        );
        radioButtonProdutos->setText(QApplication::translate("Bloom", "Usarei especificador de produtos", 0));
        produto_visual->setTabText(produto_visual->indexOf(tabProdutos), QApplication::translate("Bloom", "Produtos", 0));
        label_19->setText(QApplication::translate("Bloom", "N\303\272meros de integrantes por grupo", 0));
        produto_visual->setTabText(produto_visual->indexOf(tab), QApplication::translate("Bloom", "Grupos", 0));
        frase->setHtml(QApplication::translate("Bloom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.064pt;\"><br /></p></body></html>", 0));
        label_21->setText(QApplication::translate("Bloom", "Unidade", 0));
        lineEditConteudo_2->setText(QString());
        lineEditConteudo_2->setPlaceholderText(QApplication::translate("Bloom", "ESCREVA AQUI O NOME DA UNIDADE", 0));
        label_20->setText(QApplication::translate("Bloom", "Objeto de estudo para o unidade", 0));
        lineEditConteudo->setText(QString());
        lineEditConteudo->setPlaceholderText(QApplication::translate("Bloom", "ESCREVA AQUI O OBJETO DE ESTUDO", 0));
        menuOI->setTitle(QApplication::translate("Bloom", "Menu", 0));
        menuAjuda->setTitle(QApplication::translate("Bloom", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Bloom: public Ui_Bloom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
