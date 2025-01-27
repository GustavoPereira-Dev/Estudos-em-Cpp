#include "ListaDupla.hpp"

template <typename T>
ListaDupla<T>::ListaDupla() : inicio(nullptr), fim(nullptr), total(0) {}

template <typename T>
void ListaDupla<T>::append(T elemento) {
    try {
        No<T>* buffer = new No<T>(elemento);
        if (fim == nullptr) {
            fim = buffer;
            inicio = buffer;
        } else {
            No<T>* ex_ultimo = fim;
            ex_ultimo->setProximo(buffer);
            buffer->setAnterior(ex_ultimo);
            fim = buffer;
        }
        total++;
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
No<T>* ListaDupla<T>::get(int index) const {
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
int ListaDupla<T>::index(T elemento) const {
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
void ListaDupla<T>::insert(int index, T elemento) {
    try {
        if (index == 0) {
            No<T>* buffer_novo = new No<T>(elemento);
            if (inicio == nullptr) {
                inicio = buffer_novo;
                fim = buffer_novo;
            } else {
                No<T>* ex_inicio = inicio;
                buffer_novo->setProximo(ex_inicio);
                inicio = buffer_novo;
                buffer_novo->setProximo(ex_inicio);
                ex_inicio->setAnterior(buffer_novo);
            }
        } else {
            insert(get(index - 1), elemento);
        }
        total++;
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
void ListaDupla<T>::insert(No<T>* item, T elemento) {
    No<T>* buffer_novo = new No<T>(elemento);
    No<T>* buffer_proximo = item->getProximo();
    item->setProximo(buffer_novo);
    buffer_novo->setProximo(buffer_proximo);
    buffer_proximo->setAnterior(buffer_novo);
    buffer_novo->setAnterior(item);
}

template <typename T>
void ListaDupla<T>::prepend(T elemento) {
    try {
        No<T>* buffer = new No<T>(elemento);
        if (fim == nullptr) {
            fim = buffer;
            inicio = buffer;
        } else {
            No<T>* ex_primeiro = inicio;
            inicio = buffer;
            buffer->setProximo(ex_primeiro);
            ex_primeiro->setAnterior(buffer);
        }
        total++;
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
No<T>* ListaDupla<T>::last() const {
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
void ListaDupla<T>::remove(int index) {
    try {
        if (index == 0) {
            if (inicio->getProximo() == nullptr) {
                delete inicio;
                inicio = nullptr;
                fim = nullptr;
            } else {
                No<T>* buffer = inicio->getProximo();
                delete inicio;
                inicio = buffer;
            }
        } else {
            No<T>* buffer_anterior = get(index - 1);
            No<T>* item = buffer_anterior->getProximo();
            buffer_anterior->setProximo(item->getProximo());
            delete item;
        }
        total--;
    } catch (const std::exception& e) {
        throw;
    }
}

template <typename T>
int ListaDupla<T>::getTotal() const {
    return total;
}

template <typename T>
std::string ListaDupla<T>::toString() const {
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
