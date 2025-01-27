#ifndef NO_HPP
#define NO_HPP

#include <string>

template <typename T>
class No {
private:
    T valor;
    No<T>* proximo;

public:
    No(T valor);
    No(T valor, No<T>* proximo);

    T getValor() const;
    void setValor(T valor);

    No<T>* getProximo() const;
    void setProximo(No<T>* proximo);

    std::string toString() const;
};

#include "No.cpp"
#endif
