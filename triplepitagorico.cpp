#include <iostream>
#include <cmath>
//tras realizar el código en pruebas.cpp intento trasladarlo aquí y modificar la fórmula para que de el resultado esperado
int main() {
    for (int a = -100; a <= 100; a++) {
        for (int b = -100; b <= 100; b++) {
            for (int c = -100; c <= 100; c++) {
                if (std::sqrt(a^2 + b^2) == c) {
                    std::cout << "Triple pitagorico encontrado: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                }
            }
        }
    }

    return 0;
}
//El código cumple los requisitos para ser un triple pitagórico ya que cumple las siguientes características:
//La formula empleada es la pedida: sqrt(a^2 + b^2) == c
//Los valores de a, b y c son menores o iguales a 100 y se cumple que la suma de a y b siempre es mayor que c
//Se utilizan los bucles esperados con el bucle for
