#ifndef GRAFOLISTA_HPP
#define GRAFOLISTA_HPP

#include <iostream>
#include <map>
#include <list>
#include <string>
#include <sstream>
#include <stdexcept>

template <typename T>
class GrafoLista {
private:
    std::map<T, std::list<T>> map;

public:
    void add(const T& source);
    void add(const T& source, const T& destination, bool direcionado = false);
    void remove(const T& s, const T& d, bool direcionado = false);
    bool has(const T& s) const;
    bool has(const T& s, const T& d) const;
    int size() const;
    std::string toString() const;
};

#include "GrafoLista.cpp"
#endif
