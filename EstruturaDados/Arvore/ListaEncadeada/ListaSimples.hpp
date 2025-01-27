#ifndef LISTASIMPLES_HPP
#define LISTASIMPLES_HPP

#include "No.hpp"
#include <sstream>
#include <stdexcept>
#include <string>

template <typename T>
class ListaSimples {
private:
    No<T>* inicio;
    No<T>* fim;

public:
    ListaSimples();

    void append(T elemento);
    No<T>* get(int index) const;
    int index(T elemento) const;
    void insert(int index, T elemento);
    void insert(No<T>* item, T elemento);
    No<T>* last() const;
    void remove(int index);
    int total() const;
    std::string toString() const;
};

#include "ListaSimples.cpp"
#endif 
