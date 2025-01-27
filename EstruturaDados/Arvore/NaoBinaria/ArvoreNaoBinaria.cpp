#include "ArvoreNaoBinaria.hpp"

ArvoreNaoBinaria::ArvoreNaoBinaria() : raiz(nullptr) {}

void ArvoreNaoBinaria::criarDepartamento(const std::string& nome, const std::string& paiNome) {
    if (paiNome.empty()) {
        if (raiz != nullptr) {
            throw std::runtime_error("Já existe um departamento raiz.");
        }
        raiz = new No<std::string>(nome);
    } else {
        No<std::string>* pai = buscarDepartamento(raiz, paiNome);
        if (pai == nullptr) {
            throw std::runtime_error("Departamento pai não encontrado.");
        }
        No<std::string>* novoDepartamento = new No<std::string>(nome);
        pai->addFilho(novoDepartamento);
    }
}

void ArvoreNaoBinaria::adicionarFuncionario(const std::string& nomeDepartamento, const std::string& nomeFuncionario) {
    No<std::string>* departamento = buscarDepartamento(raiz, nomeDepartamento);
    if (departamento == nullptr) {
        throw std::runtime_error("Departamento não encontrado.");
    }
    departamento->addFuncionario(nomeFuncionario);
}

void ArvoreNaoBinaria::removerFuncionario(const std::string& nomeDepartamento, const std::string& nomeFuncionario) {
    No<std::string>* departamento = buscarDepartamento(raiz, nomeDepartamento);
    if (departamento == nullptr) {
        throw std::runtime_error("Departamento não encontrado.");
    }
    departamento->removeFuncionario(nomeFuncionario);
}

std::string ArvoreNaoBinaria::pesquisarFuncionario(const std::string& nomeFuncionario) const {
    return buscarFuncionario(raiz, nomeFuncionario);
}

No<std::string>* ArvoreNaoBinaria::buscarDepartamento(No<std::string>* no, const std::string& nome) const {
    if (no == nullptr) return nullptr;
    if (no->getValor() == nome) return no;

    for (int i = 0; i < no->getFilhos().total(); i++) {
        No<std::string>* encontrado = buscarDepartamento(no->getFilhos().get(i), nome);
        if (encontrado != nullptr) return encontrado;
    }

    return nullptr;
}

std::string ArvoreNaoBinaria::buscarFuncionario(No<std::string>* no, const std::string& nomeFuncionario) const {
    if (no == nullptr) return "";

    for (int i = 0; i < no->getFuncionarios().total(); i++) {
        if (no->getFuncionarios().get(i) == nomeFuncionario) {
            return no->getValor();
        }
    }

    for (int i = 0; i < no->getFilhos().total(); i++) {
        std::string resultado = buscarFuncionario(no->getFilhos().get(i), nomeFuncionario);
        if (!resultado.empty()) {
            return resultado;
        }
    }

    return "";
}

ListaSimples<std::string> ArvoreNaoBinaria::listarOrdem() const {
    ListaSimples<std::string> lista;
    listarOrdem(raiz, lista);
    return lista;
}

ListaSimples<std::string> ArvoreNaoBinaria::listarPreOrdem() const {
    ListaSimples<std::string> lista;
    listarPreOrdem(raiz, lista);
    return lista;
}

ListaSimples<std::string> ArvoreNaoBinaria::listarPosOrdem() const {
    ListaSimples<std::string> lista;
    listarPosOrdem(raiz, lista);
    return lista;
}

void ArvoreNaoBinaria::listarOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const {
    if (atual != nullptr) {
        listarOrdemFilhos(atual->getFilhos(), 0, lista);
        lista.append(atual->getValor());
    }
}

void ArvoreNaoBinaria::listarOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const {
    if (filhos.total() > 0 && indice < filhos.total()) {
        listarOrdem(filhos.get(indice), lista);
        listarOrdemFilhos(filhos, indice + 1, lista);
    }
}

void ArvoreNaoBinaria::listarPreOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const {
    if (atual != nullptr) {
        lista.append(atual->getValor());
        listarPreOrdemFilhos(atual->getFilhos(), 0, lista);
    }
}

void ArvoreNaoBinaria::listarPreOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const {
    if (filhos.total() > 0 && indice < filhos.total()) {
        listarPreOrdem(filhos.get(indice), lista);
        listarPreOrdemFilhos(filhos, indice + 1, lista);
    }
}

void ArvoreNaoBinaria::listarPosOrdem(No<std::string>* atual, ListaSimples<std::string>& lista) const {
    if (atual != nullptr) {
        listarPosOrdemFilhos(atual->getFilhos(), 0, lista);
        lista.append(atual->getValor());
    }
}

void ArvoreNaoBinaria::listarPosOrdemFilhos(ListaSimples<No<std::string>>& filhos, int indice, ListaSimples<std::string>& lista) const {
    if (filhos.total() > 0 && indice < filhos.total()) {
        listarPosOrdem(filhos.get(indice), lista);
        listarPosOrdemFilhos(filhos, indice + 1, lista);
    }
}
