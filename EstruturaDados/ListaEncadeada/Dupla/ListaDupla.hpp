#ifndef LISTADUPLA_HPP
#define LISTADUPLA_HPP

#include "No.hpp"
#include <sstream>
#include <stdexcept>
#include <string>

template <typename T>
class ListaDupla {
private:
    No<T>* inicio;
    No<T>* fim;
    int total;

public:
    ListaDupla();
    
    void append(T elemento);
    No<T>* get(int index) const;
    int index(T elemento) const;
    void insert(int index, T elemento);
    void insert(No<T>* item, T elemento);
    void prepend(T elemento);
    No<T>* last() const;
    void remove(int index);
    int getTotal() const;
    std::string toString() const;
};

#include "ListaDupla.cpp"
#endif
