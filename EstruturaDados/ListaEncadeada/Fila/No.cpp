#include "No.hpp"

template <typename T>
No<T>::No(T valor) : valor(valor), proximo(nullptr) {}

template <typename T>
T No<T>::getValor() const {
    return valor;
}

template <typename T>
void No<T>::setValor(T valor) {
    this->valor = valor;
}

template <typename T>
No<T>* No<T>::getProximo() const {
    return proximo;
}

template <typename T>
void No<T>::setProximo(No<T>* proximo) {
    this->proximo = proximo;
}

template <typename T>
std::string No<T>::toString() const {
    return std::to_string(valor);
}
