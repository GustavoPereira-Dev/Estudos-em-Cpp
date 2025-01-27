#ifndef NO_HPP
#define NO_HPP

#include <string>
#include "ListaSimples.hpp"

template <typename T>
class No {
private:
    T valor;
    No<T>* pai;
    ListaSimples<No<T>> filhos;
    ListaSimples<std::string> funcionarios;

public:
    No(T valor);

    T getValor() const;
    No<T>* getPai() const;
    void setPai(No<T>* pai);

    ListaSimples<No<T>>& getFilhos();
    ListaSimples<std::string>& getFuncionarios();

    void addFilho(No<T>* filho);
    void addFuncionario(const std::string& funcionario);
    void removeFuncionario(const std::string& funcionario);

    std::string toString() const;
};

#include "No.cpp"
#endif
