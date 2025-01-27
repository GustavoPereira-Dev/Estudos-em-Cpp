#ifndef NO_HPP
#define NO_HPP

#include <string>

template <typename T>
class No {
private:
    T valor;
    No<T>* maior;
    No<T>* menor;
    No<T>* raiz;
    int balanceamento;

public:
    No(T valor);

    T getValor() const;
    void setValor(T valor);

    No<T>* getMaior() const;
    void setMaior(No<T>* maior);

    No<T>* getMenor() const;
    void setMenor(No<T>* menor);

    No<T>* getRaiz() const;
    void setRaiz(No<T>* raiz);

    int getBalanceamento() const;
    void setBalanceamento(int balanceamento);

    std::string toString() const;
};

#include "No.cpp"
#endif
