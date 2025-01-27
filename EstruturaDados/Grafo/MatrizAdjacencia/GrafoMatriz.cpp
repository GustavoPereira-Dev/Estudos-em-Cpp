#include "GrafoMatriz.hpp"

template <typename T>
GrafoMatriz<T>::GrafoMatriz(const std::vector<std::string>& labels)
    : labels(labels), matriz(labels.size(), std::vector<int>(labels.size(), 0)) {}

template <typename T>
void GrafoMatriz<T>::link(const std::string& label1, const std::string& label2, bool direcionado) {
    auto it1 = std::find(labels.begin(), labels.end(), label1);
    auto it2 = std::find(labels.begin(), labels.end(), label2);
    if (it1 != labels.end() && it2 != labels.end()) {
        int index_label1 = std::distance(labels.begin(), it1);
        int index_label2 = std::distance(labels.begin(), it2);
        matriz[index_label1][index_label2] = 1;
        if (!direcionado) {
            matriz[index_label2][index_label1] = 1;
        }
    }
}

template <typename T>
void GrafoMatriz<T>::unlink(const std::string& label1, const std::string& label2, bool direcionado) {
    auto it1 = std::find(labels.begin(), labels.end(), label1);
    auto it2 = std::find(labels.begin(), labels.end(), label2);
    if (it1 != labels.end() && it2 != labels.end()) {
        int index_label1 = std::distance(labels.begin(), it1);
        int index_label2 = std::distance(labels.begin(), it2);
        matriz[index_label1][index_label2] = 0;
        if (!direcionado) {
            matriz[index_label2][index_label1] = 0;
        }
    }
}

template <typename T>
std::string GrafoMatriz<T>::toString() const {
    std::ostringstream builder;
    for (size_t i = 0; i < labels.size(); i++) {
        builder << labels[i] << ": ";
        for (size_t j = 0; j < labels.size(); j++) {
            if (matriz[i][j] == 1) {
                builder << labels[j] << " ";
            }
        }
        builder << "\r\n";
    }
    return builder.str();
}
