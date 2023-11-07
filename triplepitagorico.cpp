#include <iostream>
#include <cmath>
//tras realizar el código en pruebas.cpp intento trasladarlo aquí y modificar la fórmula para que de e
int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            for (int c = 1; c <= 100; c++) {
                if (std::sqrt(a * a + b * b) == c) {
                    std::cout << "Triple pitagorico encontrado: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                }
            }
        }
    }

    return 0;
}