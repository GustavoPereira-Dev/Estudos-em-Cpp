#ifndef ARVOREBINARIA_HPP
#define ARVOREBINARIA_HPP
#include "Arvore/ListaEncadeada/ListaSimples.hpp"

#include "No.hpp"

template <typename T>
class ArvoreBinaria {
private:
    No<T>* raiz;
    int tamanho;

    int altura(No<T>* atual) const;
    void defineBalanceamento(No<T>* atual);
    No<T>* rotacaoEsquerda(No<T>* atual);
    No<T>* rotacaoDireita(No<T>* atual);
    No<T>* rotacaoDuplaDireita(No<T>* atual);
    No<T>* rotacaoDuplaEsquerda(No<T>* atual);
    No<T>* balancear(No<T>* atual);
    void ordem(No<T>* atual, ListaSimples<T>& lista) const;
    void preOrdem(No<T>* atual, ListaSimples<T>& lista) const;
    void posOrdem(No<T>* atual, ListaSimples<T>& lista) const;

public:
    ArvoreBinaria();

    void add(T valor);
    void balancear();
    void add(T valor);
    ListaSimples<T> ordem() const;
    ListaSimples<T> preOrdem() const;
    ListaSimples<T> posOrdem() const;
    bool remove(T valor);
};

#include "ArvoreBinaria.cpp"
#endif
