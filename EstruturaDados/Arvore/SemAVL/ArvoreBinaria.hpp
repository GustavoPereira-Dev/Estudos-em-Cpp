#ifndef ARVOREBINARIA_HPP
#define ARVOREBINARIA_HPP

#include "No.hpp"
#include "Arvore/ListaEncadeada/ListaSimples.hpp"

template <typename T>
class ArvoreBinaria {
private:
    No<T>* raiz;
    int tamanho;

    void ordem(No<T>* atual, ListaSimples<T>& lista) const;
    void preOrdem(No<T>* atual, ListaSimples<T>& lista) const;
    void posOrdem(No<T>* atual, ListaSimples<T>& lista) const;

public:
    ArvoreBinaria();

    void add(T valor);
    ListaSimples<T> ordem() const;
    ListaSimples<T> preOrdem() const;
    ListaSimples<T> posOrdem() const;
    bool remove(T valor);
};

#include "ArvoreBinaria.cpp"
#endif
