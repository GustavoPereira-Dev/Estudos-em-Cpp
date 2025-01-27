#ifndef STACK_HPP
#define STACK_HPP

#include "No.hpp"
#include <sstream>
#include <stdexcept>
#include <string>

template <typename T>
class Stack {
private:
    No<T>* ultimo;

public:
    Stack();

    void push(T elemento);
    No<T>* pop();
    std::string toString() const;
};

#include "Stack.cpp"
#endif
