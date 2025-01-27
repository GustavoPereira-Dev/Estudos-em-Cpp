#include "Stack.hpp"

template <typename T>
Stack<T>::Stack() : ultimo(nullptr) {}

template <typename T>
void Stack<T>::push(T elemento) {
    No<T>* novo = new No<T>(elemento);
    if (ultimo != nullptr) {
        No<T>* anterior = ultimo;
        novo->setAnterior(anterior);
    }
    ultimo = novo;
}

template <typename T>
No<T>* Stack<T>::pop() {
    if (ultimo == nullptr) {
        throw std::invalid_argument("A pilha está vazia!");
    }
    No<T>* elemento = ultimo;
    ultimo = elemento->getAnterior();
    return elemento;
}

template <typename T>
std::string Stack<T>::toString() const {
    if (ultimo == nullptr) {
        return "[]";
    }

    std::ostringstream oss;
    oss << "[";
    No<T>* buffer = ultimo;
    oss << buffer->getValor();
    while (buffer->getAnterior() != nullptr) {
        buffer = buffer->getAnterior();
        oss << ", " << buffer->getValor();
    }
    oss << "]";
    return oss.str();
}
