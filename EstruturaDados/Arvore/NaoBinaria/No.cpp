#include "No.hpp"

template <typename T>
No<T>::No(T valor) : valor(valor), pai(nullptr) {}

template <typename T>
T No<T>::getValor() const {
    return valor;
}

template <typename T>
No<T>* No<T>::getPai() const {
    return pai;
}

template <typename T>
void No<T>::setPai(No<T>* pai) {
    this->pai = pai;
}

template <typename T>
ListaSimples<No<T>>& No<T>::getFilhos() {
    return filhos;
}

template <typename T>
ListaSimples<std::string>& No<T>::getFuncionarios() {
    return funcionarios;
}

template <typename T>
void No<T>::addFilho(No<T>* filho) {
    filho->setPai(this);
    filhos.append(filho);
}

template <typename T>
void No<T>::addFuncionario(const std::string& funcionario) {
    funcionarios.append(funcionario);
}

template <typename T>
void No<T>::removeFuncionario(const std::string& funcionario) {
    funcionarios.remove(funcionarios.index(funcionario));
}

template <typename T>
std::string No<T>::toString() const {
    return std::to_string(valor);
}
