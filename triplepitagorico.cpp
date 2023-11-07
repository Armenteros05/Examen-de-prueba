#include <iostream>
#include <cmath>
//tras realizar el código en pruebas.cpp intento trasladarlo aquí y modificar la fórmula para que de el resultado esperado
int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            for (int c = 1; c <= 100; c++) {
                if (std::sqrt(a^2 + b^2) == c) {
                    std::cout << "Triple pitagorico encontrado: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                }
            }
        }
    }

    return 0;
}