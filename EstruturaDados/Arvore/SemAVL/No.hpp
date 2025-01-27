#ifndef NO_HPP
#define NO_HPP

#include <string>

template <typename T>
class No {
private:
    T valor;
    No<T>* maior;
    No<T>* menor;

public:
    No(T valor);

    T getValor() const;
    void setValor(T valor);

    No<T>* getMaior() const;
    void setMaior(No<T>* maior);

    No<T>* getMenor() const;
    void setMenor(No<T>* menor);

    std::string toString() const;
};

#include "No.cpp"
#endif
