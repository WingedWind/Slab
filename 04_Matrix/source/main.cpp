#include <iostream>
#include <cassert>

#include "matrix.hpp"

int main() {

    int m = 0;
    int n = 0;
    long long res = 0;

    std::cin >> m;

    assert(std::cin.good());
    
    n = m;

    matrix::matrix <double> matrix{m, n};
    matrix.input_matrix();

    res = matrix.gauss_jordan();
    std::cout << res << std::endl;

    return 0;
}