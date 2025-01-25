#ifndef CLASSEMETODOS_H
#define CLASSEMETODOS_H

class ClasseMetodos {
private:
    static ClasseMetodos* instancia;
    ClasseMetodos();

public:
    static ClasseMetodos* getInstancia();

    int* CarregaVetor(int* vt, int tamanho);
    int* ClassificaVetor(int* vt, int tamanho);
    void MostraVetor(int* vt, int tamanho);
    int** CarregaMatriz(int** mt, int linhas, int colunas);
    int** ClassificaMatriz(int** mt, int linhas, int colunas);
    void MostraMatriz(int** mt, int linhas, int colunas);
};

#endif
