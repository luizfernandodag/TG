#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    QPalette sample_palette;
    sample_palette.setColor(QPalette::Window, Qt::white);
    sample_palette.setColor(QPalette::WindowText, Qt::blue);
    ui->setupUi(this);

    objetivo = "";
    processoCognitivo = "";
    conteudo = "";
    recurso = "";
    produto = "";
    disciplina = "";
    usareiConteudo = false;
    usareiRecursos = false;
    usareiProdutos = false;



    processoCognitivo = ui->nivel1Conhecimento->currentText();

//QString conteudo = ui->
    //objetivo += "Estudantes irão " + processoCognitivo;

    //ui->frase->setText(objetivo);
atualizaObjetivo();

}



MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_nivel1Conhecimento_currentIndexChanged(const QString &arg1)
{

   processoCognitivo = ui->nivel1Conhecimento->currentText();
     atualizaObjetivo();

}


void MainWindow::on_textEdit_destroyed()
{




}

void MainWindow::atualizaObjetivo()
{
    objetivo = "";

    objetivo +="Na unidade ";
    if(unidade == "")
        objetivo += "ESCREVA A UNIDADE ACIMA, ";
    else
    {

        objetivo += unidade + ", ";
    }

    objetivo += "os estudantes irão " + processoCognitivo;

    if(usareiConteudo)
    {
        objetivo += " " + conteudo;

    }

    if(disciplina != "")
    {
        objetivo += " " + disciplina;
    }
    else
    {
        objetivo += " DIGITE O OBJETIVO PARA A UNIDADE ACIMA ";
    }

    if(usareiRecursos)
    {
        if(recurso != "")
        objetivo +=  " usando " + recurso + " ";



    }

    if(usareiProdutos)
    {
        if(produto != "")
        objetivo +=  "e criarão " + produto + " ";

    }


    objetivo += "em um grupo de " + QString::number(ui->spinBoxNumIntegrantesGrupo->value()) + " pessoa(s)";

    ui->frase->setText(objetivo);
}




void MainWindow::on_conteudo_profundidade_currentIndexChanged(const QString &arg1)
{
    conteudo = ui->conteudo_profundidade->currentText();
    atualizaObjetivo();
}

void MainWindow::on_conteudo_complexidade_currentIndexChanged(const QString &arg1)
{
    conteudo = ui->conteudo_complexidade->currentText();
    atualizaObjetivo();
}


void MainWindow::on_conteudo_imperativo_2_currentIndexChanged(const QString &arg1)
{
    conteudo = ui->conteudo_imperativo_2->currentText();
    atualizaObjetivo();
}

void MainWindow::on_conteudo_palavrasChave_currentIndexChanged(const QString &arg1)
{
    conteudo = ui->conteudo_palavrasChave->currentText();
    atualizaObjetivo();
}

void MainWindow::on_nivel2Compreensao_currentIndexChanged(const QString &arg1)
{
    processoCognitivo = ui->nivel2Compreensao->currentText();
    atualizaObjetivo();
}

void MainWindow::on_nivel3Aplicacao_currentIndexChanged(const QString &arg1)
{
    processoCognitivo = ui->nivel3Aplicacao->currentText();
    atualizaObjetivo();
}




void MainWindow::on_nivel4Analise_currentIndexChanged(const QString &arg1)
{
    processoCognitivo = ui->nivel4Analise->currentText();
    atualizaObjetivo();
}



void MainWindow::on_nivel5Avaliacao_currentIndexChanged(const QString &arg1)
{
    processoCognitivo = ui->nivel5Avaliacao->currentText();
    atualizaObjetivo();
}

void MainWindow::on_nivel6Criacao_currentIndexChanged(const QString &arg1)
{
    processoCognitivo = ui->nivel6Criacao->currentText();
    atualizaObjetivo();
}

void MainWindow::on_radioButtonConteudo_clicked()
{
    usareiConteudo = ui->radioButtonConteudo->isChecked();
    atualizaObjetivo();
}


void MainWindow::on_radioButtonRecursos_clicked()
{
    usareiRecursos = ui->radioButtonRecursos->isChecked();
    atualizaObjetivo();
}

void MainWindow::on_radioButtonProdutos_clicked()
{
    usareiProdutos = ui->radioButtonProdutos->isChecked();
    atualizaObjetivo();
}

void MainWindow::on_recursos_Offline_currentIndexChanged(const QString &arg1)
{
    recurso = ui->recursos_Offline->currentText();
    atualizaObjetivo();
}


void MainWindow::on_recursos_online_currentIndexChanged(const QString &arg1)
{
    recurso = ui->recursos_online->currentText();
    atualizaObjetivo();
}


void MainWindow::on_produto_grafico_currentIndexChanged(const QString &arg1)
{
    produto = ui->produto_grafico->currentText();
    atualizaObjetivo();
}


void MainWindow::on_produto_construcao_currentIndexChanged(const QString &arg1)
{
    produto = ui->produto_construcao->currentText();
    atualizaObjetivo();
}




void MainWindow::on_produto_oral_currentIndexChanged(const QString &arg1)
{
    produto = ui->produto_oral->currentText();
    atualizaObjetivo();
}



void MainWindow::on_produto_multimidia_currentIndexChanged(const QString &arg1)
{
    produto = ui->produto_multimidia->currentText();
    atualizaObjetivo();
}



void MainWindow::on_produto_escrito_currentIndexChanged(const QString &arg1)
{
    produto = ui->produto_escrito->currentText();
    atualizaObjetivo();
}


void MainWindow::on_spinBoxNumIntegrantesGrupo_valueChanged(const QString &arg1)
{
    atualizaObjetivo();
}

void MainWindow::on_lineEditConteudo_editingFinished()
{
    disciplina = ui->lineEditConteudo->text();
    if(disciplina != "")
            if( disciplina[disciplina.size() -1 ] != ' ')
        disciplina += " ";
    atualizaObjetivo();
}

void MainWindow::on_lineEditConteudo_2_editingFinished()
{
    unidade = ui->lineEditConteudo_2->text();
    //if(unidade != "")
      //      if( unidade[unidade.size() -1 ] != ' ')
        //unidade += " ";
    atualizaObjetivo();
}

