#include "No.hpp"

template <typename T>
No<T>::No(T valor) : valor(valor), anterior(nullptr) {}

template <typename T>
T No<T>::getValor() const {
    return valor;
}

template <typename T>
void No<T>::setValor(T valor) {
    this->valor = valor;
}

template <typename T>
No<T>* No<T>::getAnterior() const {
    return anterior;
}

template <typename T>
void No<T>::setAnterior(No<T>* anterior) {
    this->anterior = anterior;
}

template <typename T>
std::string No<T>::toString() const {
    return std::to_string(valor);
}
