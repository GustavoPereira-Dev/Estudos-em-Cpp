#include "GrafoLista.hpp"

template <typename T>
void GrafoLista<T>::add(const T& source) {
    map[source] = std::list<T>();
}

template <typename T>
void GrafoLista<T>::add(const T& source, const T& destination, bool direcionado) {
    if (!has(source)) add(source);
    if (!has(destination)) add(destination);

    map[source].push_back(destination);
    if (!direcionado) {
        map[destination].push_back(source);
    }
}

template <typename T>
void GrafoLista<T>::remove(const T& s, const T& d, bool direcionado) {
    if (!has(s)) throw std::invalid_argument("Elemento não encontrado!");
    if (!has(d)) throw std::invalid_argument("Destino não encontrado!");

    map[s].remove(d);
    if (!direcionado) {
        map[d].remove(s);
    }
}

template <typename T>
bool GrafoLista<T>::has(const T& s) const {
    return map.find(s) != map.end();
}

template <typename T>
bool GrafoLista<T>::has(const T& s, const T& d) const {
    auto it = map.find(s);
    if (it == map.end()) return false;
    auto& list = it->second;
    return std::find(list.begin(), list.end(), d) != list.end();
}

template <typename T>
int GrafoLista<T>::size() const {
    return map.size();
}

template <typename T>
std::string GrafoLista<T>::toString() const {
    std::ostringstream builder;

    for (const auto& pair : map) {
        builder << pair.first << ": ";
        for (const auto& item : pair.second) {
            builder << item << " ";
        }
        builder << "\n";
    }

    return builder.str();
}
