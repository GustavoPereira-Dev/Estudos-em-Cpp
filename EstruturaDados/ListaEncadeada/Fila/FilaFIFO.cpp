#include "FilaFifo.hpp"

template <typename T>
FilaFifo<T>::FilaFifo() : inicio(nullptr), ultimo(nullptr) {}

template <typename T>
void FilaFifo<T>::enqueue(T elemento) {
    No<T>* buffer = new No<T>(elemento);
    if (inicio == nullptr) {
        inicio = buffer;
        ultimo = buffer;
    } else {
        ultimo->setProximo(buffer);
        ultimo = buffer;
    }
}

template <typename T>
No<T>* FilaFifo<T>::dequeue() {
    if (inicio == nullptr) {
        return nullptr;
    }
    No<T>* primeiro = inicio;
    inicio = primeiro->getProximo();
    return primeiro;
}

template <typename T>
std::string FilaFifo<T>::toString() const {
    if (inicio == nullptr) {
        return "[]";
    }

    std::ostringstream oss;
    oss << "[";
    No<T>* buffer = inicio;
    oss << buffer->getValor();
    while (buffer->getProximo() != nullptr) {
        buffer = buffer->getProximo();
        oss << ", " << buffer->getValor();
    }
    oss << "]";
    return oss.str();
}
