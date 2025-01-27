#ifndef GRAFOMATRIZ_HPP
#define GRAFOMATRIZ_HPP

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

template <typename T>
class GrafoMatriz {
private:
    std::vector<std::vector<int>> matriz;
    std::vector<std::string> labels;

public:
    GrafoMatriz(const std::vector<std::string>& labels);

    void link(const std::string& label1, const std::string& label2, bool direcionado = false);
    void unlink(const std::string& label1, const std::string& label2, bool direcionado = false);

    std::string toString() const;
};

#include "GrafoMatriz.cpp"
#endif
