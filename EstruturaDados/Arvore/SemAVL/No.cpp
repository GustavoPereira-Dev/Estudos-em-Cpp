#include "No.hpp"

template <typename T>
No<T>::No(T valor) : valor(valor), maior(nullptr), menor(nullptr) {}

template <typename T>
T No<T>::getValor() const {
    return valor;
}

template <typename T>
void No<T>::setValor(T valor) {
    this->valor = valor;
}

template <typename T>
No<T>* No<T>::getMaior() const {
    return maior;
}

template <typename T>
void No<T>::setMaior(No<T>* maior) {
    this->maior = maior;
}

template <typename T>
No<T>* No<T>::getMenor() const {
    return menor;
}

template <typename T>
void No<T>::setMenor(No<T>* menor) {
    this->menor = menor;
}

template <typename T>
std::string No<T>::toString() const {
    return std::to_string(valor);
}
