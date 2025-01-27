#ifndef ARVORENAOBINARIA_HPP
#define ARVORENAOBINARIA_HPP

#include "No.hpp"
#include "ListaSimples.hpp"
#include <string>
#include <exception>

class ArvoreNaoBinaria {
private:
    No<std::string>* raiz;

    No<std::string>* buscarDepartamento(No<std::string>* no, const std::string& nome) const;
    std::string buscarFuncionario(No<std::string>* no, const std::string& nomeFuncionario) const;

    void listarOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const;
    void listarOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const;

    void listarPreOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const;
    void listarPreOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const;

    void listarPosOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const;
    void listarPosOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const;

public:
    ArvoreBinaria();

    void criarDepartamento(const std::string& nome, const std::string& paiNome) const;
    void adicionarFuncionario(const std::string& nomeDepartamento, const std::string& nomeFuncionario) const;
    void removerFuncionario(const std::string& nomeDepartamento, const std::string& nomeFuncionario) const;
    std::string pesquisarFuncionario(const std::string& nomeFuncionario) const;

    ListaSimples<std::string> listarOrdem() const;
    ListaSimples<std::string> listarPreOrdem() const;
    ListaSimples<std::string> listarPosOrdem() const;
};

#include "ArvoreNaoBinaria.ipp"
#endif 
