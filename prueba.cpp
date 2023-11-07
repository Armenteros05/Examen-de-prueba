#include <iostream>
#include <cmath>
//este archivo lo he usado para probar la fórmula y ver si me daba el resultado esperado
int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            for (int c = 1; c <= 100; c++) {
                //lo único que he cambiado es la fórmula señalada, que ahora es la que debería ser en triplepitagorico.cpp
                if (std::sqrt(a * a + b * b) == c) {
                    std::cout << "Triple pitagorico encontrado: a = " << a << ", b = " << b << ", c = " << c << std::endl;
                }
            }
        }
    }

    return 0;
}
