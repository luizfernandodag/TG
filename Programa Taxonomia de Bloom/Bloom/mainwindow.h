#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString objetivo = "";
    QString processoCognitivo = "";
    QString conteudo = "";
    QString recurso = "";
    QString produto = "";
    QString disciplina = "";
    QString unidade;
    bool usareiConteudo = false;
    bool usareiRecursos = false;
    bool usareiProdutos = false;

    void atualizaObjetivo();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_textEdit_destroyed();

    void on_nivel1Conhecimento_currentIndexChanged(const QString &arg1);

    void on_conteudo_profundidade_currentIndexChanged(const QString &arg1);

    void on_conteudo_complexidade_currentIndexChanged(const QString &arg1);

    void on_conteudo_imperativo_2_currentIndexChanged(const QString &arg1);

    void on_conteudo_palavrasChave_currentIndexChanged(const QString &arg1);

    void on_nivel2Compreensao_currentIndexChanged(const QString &arg1);

    void on_nivel3Aplicacao_currentIndexChanged(const QString &arg1);

    void on_nivel4Analise_currentIndexChanged(const QString &arg1);

    void on_nivel5Avaliacao_currentIndexChanged(const QString &arg1);

    void on_nivel6Criacao_currentIndexChanged(const QString &arg1);

    void on_radioButtonConteudo_clicked();

    void on_radioButtonRecursos_clicked();

    void on_radioButtonProdutos_clicked();

    void on_recursos_Offline_currentIndexChanged(const QString &arg1);

    void on_recursos_online_currentIndexChanged(const QString &arg1);

    void on_comboBox_13_currentIndexChanged(const QString &arg1);

    void on_produto_grafico_currentIndexChanged(const QString &arg1);

    void on_produto_construcao_currentIndexChanged(const QString &arg1);

    void on_produto_oral_currentIndexChanged(const QString &arg1);

    void on_produto_multimidia_currentIndexChanged(const QString &arg1);

    void on_produto_escrito_currentIndexChanged(const QString &arg1);

    void on_spinBoxNumIntegrantesGrupo_valueChanged(const QString &arg1);

    void on_lineEditConteudo_editingFinished();

    void on_lineEditConteudo_2_editingFinished();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
