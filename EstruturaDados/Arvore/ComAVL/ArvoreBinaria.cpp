#include "ArvoreBinaria.hpp"
#include "Arvore/ListaEncadeada/ListaSimples.hpp"

template <typename T>
ArvoreBinaria<T>::ArvoreBinaria() : raiz(nullptr), tamanho(0) {}

template <typename T>
void ArvoreBinaria<T>::add(T valor) {
    No<T>* novo = new No<T>(valor);
    tamanho++;
    if (raiz == nullptr) {
        raiz = novo;
        defineBalanceamento(raiz);
    } else {
        No<T>* atual = raiz;
        while (true) {
            if (novo->getValor().compareTo(atual->getValor()) == -1) {
                if (atual->getMenor() != nullptr) {
                    atual = atual->getMenor();
                } else {
                    atual.setMenor(novo);
                    novo.setRaiz(atual);
                    defineBalanceamento(raiz);
                    raiz = balancear(raiz);
                    break;
                }
            } else {
                if (atual->getMaior() != nullptr) {
                    atual = atual->getMaior();
                } else {
                    atual.setMaior(novo);
                    novo.setRaiz(atual);
                    defineBalanceamento(raiz);
                    raiz = balancear(raiz);
                    break;
                }
            }
        }
    }
}

template <typename T>
int ArvoreBinaria<T>::altura(No<T>* atual) const {
    if (atual == nullptr) {
        return -1;
    }
    if (atual->getMaior() == nullptr && atual->getMenor() == nullptr) {
        return 0;
    } else if (atual->getMenor() == nullptr) {
        return 1 + altura(atual->getMaior());
    } else if (atual->getMaior() == nullptr) {
        return 1 + altura(atual->getMenor());
    } else {
        if (altura(atual->getMenor()) > altura(atual->getMaior())) {
            return 1 + altura(atual->getMenor());
        } else {
            return 1 + altura(atual->getMaior());
        }
    }
}

template <typename T>
void ArvoreBinaria<T>::defineBalanceamento(No<T>* atual) {
    atual.setBalanceamento(altura(atual->getMenor()) - altura(atual->getMaior()));

    if (atual->getMaior() != nullptr) defineBalanceamento(atual->getMaior());
    if (atual->getMenor() != nullptr) defineBalanceamento(atual->getMenor());
}

template <typename T>
No<T>* ArvoreBinaria<T>::rotacaoEsquerda(No<T>* atual) {
    No<T>* aux = atual->getMaior();
    aux.setRaiz(atual->getRaiz());

    if (aux->getMenor() != nullptr) aux->getMenor().setRaiz(atual);

    atual.setRaiz(aux);
    atual.setMaior(aux->getMenor());
    aux.setMenor(atual);

    if (aux->getRaiz() != nullptr) {
        if (aux->getRaiz()->getMaior() == atual) {
            aux->getRaiz().setMaior(aux);
        } else if (aux->getRaiz()->getMenor() == atual) {
            aux->getRaiz().setMenor(aux);
        }
    }

    defineBalanceamento(aux);

    return aux;
}

template <typename T>
No<T>* ArvoreBinaria<T>::rotacaoDireita(No<T>* atual) {
    No<T>* aux = atual->getMenor();
    aux.setRaiz(atual->getRaiz());

    if (aux->getMaior() != nullptr) aux->getMaior().setRaiz(atual);

    atual.setRaiz(aux);
    atual.setMenor(aux->getMaior());
    aux.setMaior(atual);

    if (aux->getRaiz() != nullptr) {
        if (aux->getRaiz()->getMaior() == atual) {
            aux->getRaiz().setMaior(aux);
        } else if (aux->getRaiz()->getMenor() == atual) {
            aux->getRaiz().setMenor(aux);
        }
    }

    defineBalanceamento(aux);

    return aux;
}

template <typename T>
No<T>* ArvoreBinaria<T>::rotacaoDuplaDireita(No<T>* atual) {
    No<T>* aux = atual->getMenor();
    atual.setMenor(rotacaoEsquerda(aux));
    return rotacaoDireita(atual);
}

template <typename T>
No<T>* ArvoreBinaria<T>::rotacaoDuplaEsquerda(No<T>* atual) {
    No<T>* aux = atual->getMaior();
    atual.setMaior(rotacaoDireita(aux));
    return rotacaoEsquerda(atual);
}

template <typename T>
No<T>* ArvoreBinaria<T>::balancear(No<T>* atual) {
    if (atual->getBalanceamento() == 2 && atual->getMenor()->getBalanceamento() >= 0) {
        atual = rotacaoDireita(atual);
    } else if (atual->getBalanceamento() == -2 && atual->getMaior()->getBalanceamento() <= 0) {
        atual = rotacaoEsquerda(atual);
    } else if (atual->getBalanceamento() == 2 && atual->getMenor()->getBalanceamento() < 0) {
        atual = rotacaoDuplaDireita(atual);
    } else if (atual->getBalanceamento() == -2 && atual->getMaior()->getBalanceamento() > 0) {
        atual = rotacaoDuplaEsquerda(atual);
    }

    if (atual->getMaior() != nullptr) {
        balancear(atual->getMaior());
    }

    if (atual->getMenor() != nullptr) {
        balancear(atual->getMenor());
    }

    return atual;
}

template <typename T>
void ArvoreBinaria<T>::balancear() {
    raiz = balancear(raiz);
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
