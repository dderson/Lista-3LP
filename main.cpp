#include <iostream>
#include "complex.h"

int main() {
    Complex n(5.0, -2.0);
    Complex m(-3.0, 2.0);
    Complex z(n + m);
    std::cout << "Resultado da adição de numeros complexos: " << z << "\n";

    Complex z1(n * m);
    std::cout << "Resultado da multiplicacao de numeros complexos: " << z1 << "\n" ;

    return 0;
}
