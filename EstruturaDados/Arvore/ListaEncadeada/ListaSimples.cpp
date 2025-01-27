#include "ListaSimples.hpp"

template <typename T>
ListaSimples<T>::ListaSimples() : inicio(nullptr), fim(nullptr) {}

template <typename T>
void ListaSimples<T>::append(T elemento) {
    No<T>* buffer = new No<T>(elemento);
    if (inicio == nullptr) {
        inicio = buffer;
        fim = buffer;
    } else {
        fim->setProximo(buffer);
        fim = buffer;
    }
}

template <typename T>
No<T>* ListaSimples<T>::get(int index) const {
    if (inicio == nullptr) {
        throw std::invalid_argument("Não existe item na lista.");
    }

    No<T>* buffer = inicio;
    for (int i = 0; i < index; ++i) {
        if (buffer->getProximo() == nullptr) {
            break;
        }
        buffer = buffer->getProximo();
    }

    if (buffer == nullptr) {
        throw std::invalid_argument("O índice informado não existe.");
    }

    return buffer;
}

template <typename T>
int ListaSimples<T>::index(T elemento) const {
    if (inicio == nullptr) {
        throw std::invalid_argument("Não existe item na lista.");
    }

    int index = 0;
    No<T>* buffer = inicio;
    while (buffer != nullptr) {
        if (buffer->getValor() == elemento) {
            return index;
        }
        buffer = buffer->getProximo();
        index++;
    }

    throw std::invalid_argument("Item não encontrado.");
}

template <typename T>
void ListaSimples<T>::insert(int index, T elemento) {
    if (index == 0) {
        No<T>* buffer_novo = new No<T>(elemento);
        if (inicio == nullptr) {
            inicio = buffer_novo;
        } else {
            No<T>* ex_inicio = inicio;
            buffer_novo->setProximo(ex_inicio);
            inicio = buffer_novo;
        }
    } else {
        insert(get(index - 1), elemento);
    }
}

template <typename T>
void ListaSimples<T>::insert(No<T>* item, T elemento) {
    No<T>* buffer_novo = new No<T>(elemento);
    No<T>* buffer_proximo = item->getProximo();
    item->setProximo(buffer_novo);
    buffer_novo->setProximo(buffer_proximo);
}

template <typename T>
No<T>* ListaSimples<T>::last() const {
    if (inicio == nullptr) {
        throw std::invalid_argument("Não existe item na lista.");
    }

    No<T>* buffer = inicio;
    while (buffer->getProximo() != nullptr) {
        buffer = buffer->getProximo();
    }

    return buffer;
}

template <typename T>
void ListaSimples<T>::remove(int index) {
    if (index == 0) {
        if (inicio->getProximo() == nullptr) {
            delete inicio;
            inicio = nullptr;
        } else {
            No<T>* buffer = inicio->getProximo();
            delete inicio;
            inicio = buffer;
        }
        return;
    }

    No<T>* buffer_anterior = get(index - 1);
    No<T>* item = buffer_anterior->getProximo();
    buffer_anterior->setProximo(item->getProximo());
    delete item;
}

template <typename T>
int ListaSimples<T>::total() const {
    if (inicio == nullptr) {
        return 0;
    }

    No<T>* buffer = inicio;
    int total_elementos = 0;
    while (buffer != nullptr) {
        total_elementos++;
        buffer = buffer->getProximo();
    }

    return total_elementos;
}

template <typename T>
std::string ListaSimples<T>::toString() const {
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
