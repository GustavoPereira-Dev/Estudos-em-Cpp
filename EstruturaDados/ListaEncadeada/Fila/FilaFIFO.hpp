#ifndef FILAFIFO_HPP
#define FILAFIFO_HPP

#include "No.hpp"
#include <sstream>
#include <stdexcept>
#include <string>

template <typename T>
class FilaFifo {
private:
    No<T>* inicio;
    No<T>* ultimo;

public:
    FilaFifo();

    void enqueue(T elemento);
    No<T>* dequeue();
    std::string toString() const;
};

#include "FilaFifo.cpp"
#endif
