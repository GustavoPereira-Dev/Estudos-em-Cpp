#ifndef NO_HPP
#define NO_HPP

#include <string>

template <typename T>
class No {
private:
    T valor;
    No<T>* proximo;
    No<T>* anterior;

public:
    No(T valor);
    
    T getValor() const;
    void setValor(T valor);
    
    No<T>* getProximo() const;
    void setProximo(No<T>* proximo);
    
    No<T>* getAnterior() const;
    void setAnterior(No<T>* anterior);
    
    std::string toString() const;
};

#include "No.cpp"
#endif
