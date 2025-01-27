#include "ListaCircular.hpp"

template <typename T>
ListaCircular<T>::ListaCircular() : ultimo_elemento(nullptr) {}

template <typename T>
void ListaCircular<T>::append(T elemento) {
    No<T>* novo = new No<T>(elemento);
    try {
        if (ultimo_elemento == nullptr) {
            ultimo_elemento = novo;
            novo->setProximo(novo);
            novo->setAnterior(novo);
        } else {
            No<T>* buffer_ultimo = ultimo_elemento;
            No<T>* buffer_proximo = ultimo_elemento->getProximo();
            novo->setAnterior(buffer_ultimo);
            novo->setProximo(buffer_proximo);
            buffer_proximo->setAnterior(novo);
            buffer_ultimo->setProximo(novo);
            ultimo_elemento = novo;
        }
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
No<T>* ListaCircular<T>::getLast() const {
    if (ultimo_elemento == nullptr) {
        throw std::invalid_argument("Não existe item na lista.");
    }
    return ultimo_elemento;
}

template <typename T>
void ListaCircular<T>::remove(No<T>* remover) {
    try {
        No<T>* anterior = remover->getAnterior();
        No<T>* proximo = remover->getProximo();
        if (ultimo_elemento == remover && anterior == remover && proximo == remover) {
            ultimo_elemento = nullptr;
            return;
        }
        anterior->setProximo(proximo);
        proximo->setAnterior(anterior);
        if (ultimo_elemento == remover) {
            ultimo_elemento = anterior;
        }
        remover->setProximo(nullptr);
        remover->setAnterior(nullptr);
        remover->setValor(nullptr);
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
void ListaCircular<T>::remove() {
    remove(getLast());
}

template <typename T>
int ListaCircular<T>::total() const {
    if (ultimo_elemento == nullptr) {
        return 0;
    }
    No<T>* buffer = ultimo_elemento;
    int total_elementos = 0;
    do {
        total_elementos++;
        buffer = buffer->getProximo();
    } while (buffer != ultimo_elemento);
    return total_elementos;
}

template <typename T>
std::string ListaCircular<T>::toString() const {
    if (ultimo_elemento == nullptr) {
        return "[]";
    }

    std::ostringstream oss;
    oss << "[";
    No<T>* buffer = ultimo_elemento;
    oss << buffer->getValor();
    while (buffer->getProximo() != ultimo_elemento) {
        buffer = buffer->getProximo();
        oss << ", " << buffer->getValor();
    }
    oss << "]";
    return oss.str();
}
