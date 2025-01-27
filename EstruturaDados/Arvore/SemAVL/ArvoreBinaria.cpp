#include "Arvore/ListaEncadeada/ListaSimples.hpp"

template <typename T>
ArvoreBinaria<T>::ArvoreBinaria() : raiz(nullptr), tamanho(0) {}

template <typename T>
void ArvoreBinaria<T>::add(T valor) {
    No<T>* novo = new No<T>(valor);
    tamanho++;
    if (raiz == nullptr) {
        raiz = novo;
    } else {
        No<T>* atual = raiz;
        while (true) {
            if (novo->getValor().compareTo(atual->getValor()) == -1) {
                if (atual->getMenor() != nullptr) {
                    atual = atual->getMenor();
                } else {
                    atual->setMenor(novo);
                    break;
                }
            } else {
                if (atual->getMaior() != nullptr) {
                    atual = atual->getMaior();
                } else {
                    atual->setMaior(novo);
                    break;
                }
            }
        }
    }
}

template <typename T>
ListaSimples<T> ArvoreBinaria<T>::ordem() const {
    ListaSimples<T> lista;
    No<T>* atual = raiz;
    ordem(atual, lista);
    return lista;
}

template <typename T>
ListaSimples<T> ArvoreBinaria<T>::preOrdem() const {
    ListaSimples<T> lista;
    No<T>* atual = raiz;
    preOrdem(atual, lista);
    return lista;
}

template <typename T>
ListaSimples<T> ArvoreBinaria<T>::posOrdem() const {
    ListaSimples<T> lista;
    No<T>* atual = raiz;
    posOrdem(atual, lista);
    return lista;
}

template <typename T>
void ArvoreBinaria<T>::ordem(No<T>* atual, ListaSimples<T>& lista) const {
    if (atual != nullptr) {
        ordem(atual->getMenor(), lista);
        lista.append(atual->getValor());
        ordem(atual->getMaior(), lista);
    }
}

template <typename T>
void ArvoreBinaria<T>::preOrdem(No<T>* atual, ListaSimples<T>& lista) const {
    if (atual != nullptr) {
        lista.append(atual->getValor());
        preOrdem(atual->getMenor(), lista);
        preOrdem(atual->getMaior(), lista);
    }
}

template <typename T>
void ArvoreBinaria<T>::posOrdem(No<T>* atual, ListaSimples<T>& lista) const {
    if (atual != nullptr) {
        posOrdem(atual->getMenor(), lista);
        posOrdem(atual->getMaior(), lista);
        lista.append(atual->getValor());
    }
}

template <typename T>
bool ArvoreBinaria<T>::remove(T valor) {
    No<T>* atual = raiz;
    No<T>* paiAtual = nullptr;
    while (atual != nullptr) {
        if (atual->getValor().equals(valor)) {
            break;
        } else if (valor.compareTo(atual->getValor()) == -1) {
            paiAtual = atual;
            atual = atual->getMenor();
        } else {
            paiAtual = atual;
            atual = atual->getMaior();
        }
    }

    if (atual == nullptr) return false;

    if (atual->getMaior() != nullptr) {
        No<T>* substituto = atual->getMaior();
        No<T>* paiSubstituto = substituto->getMenor();
        while (substituto->getMenor() != nullptr) {
            paiSubstituto = substituto;
            substituto = substituto->getMenor();
        }

        substituto->setMenor(atual->getMenor());
        if (paiAtual != nullptr) {
            if (atual->getValor().compareTo(paiAtual->getValor()) == -1) {
                paiAtual->setMenor(substituto);
            } else {
                paiAtual->setMaior(substituto);
            }
        } else {
            raiz = substituto;
            paiSubstituto->setMenor(nullptr);
            raiz->setMaior(paiSubstituto);
            raiz->setMenor(atual->getMenor());
        }

        if (substituto->getValor().compareTo(paiSubstituto->getValor()) == -1) {
            paiSubstituto->setMenor(nullptr);
            substituto->setMaior(paiSubstituto);
        } else {
            paiSubstituto->setMaior(nullptr);
        }

    } else if (atual->getMenor() != nullptr) {
        No<T>* substituto = atual->getMenor();
        No<T>* paiSubstituto = atual;
        while (substituto->getMaior() != nullptr) {
            paiSubstituto = substituto;
            substituto = substituto->getMaior();
        }

        if (paiAtual != nullptr) {
            if (atual->getValor().compareTo(paiAtual->getValor()) == -1) {
                paiAtual->setMenor(substituto);
            } else {
                paiAtual->setMaior(substituto);
            }
        } else {
            raiz = substituto;
        }

        if (substituto->getValor().compareTo(paiAtual->getValor()) == -1) {
            paiSubstituto->setMenor(nullptr);
        } else {
            paiSubstituto->setMenor(nullptr);
        }
    } else {
        if (paiAtual != nullptr) {
            if (atual->getValor().compareTo(paiAtual->getValor()) == -1) {
                paiAtual->setMenor(nullptr);
            } else {
                paiAtual->setMaior(nullptr);
            }
        } else {
            raiz = nullptr;
        }
    }

    return true;
}
