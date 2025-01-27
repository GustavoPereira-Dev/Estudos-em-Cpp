#ifndef LISTACIRCULAR_HPP
#define LISTACIRCULAR_HPP

#include "No.hpp"
#include <sstream>
#include <stdexcept>
#include <string>

template <typename T>
class ListaCircular {
private:
    No<T>* ultimo_elemento;

public:
    ListaCircular();
    
    void append(T elemento);
    No<T>* getLast() const;
    void remove(No<T>* remover);
    void remove();
    int total() const;
    std::string toString() const;
};

#include "ListaCircular.ipp"
#endif