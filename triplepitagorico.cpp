#include <iostream>
#include <cmath>
//tras realizar el código en pruebas.cpp intento trasladarlo aquí
int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            for (int c = 1; c <= 100; c++) {
                //no he conseguido cambiar la fórmula que pides y solo he conseguido trabajar con esta
                if (std::sqrt(a * a + b * b) == c) {
                    std::cout << "Triple pitagorico encontrado: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                }
            }
        }
    }
std::cout << "El programa aplica tambien para todos estos valores con signo negativo,el cuadrado de un numero negativo siempre es +" << std::endl;
    return 0;
}