#include<iostream>#include <iostream>
#include <cmath>

int main() {
    double numero;
    std::cout << "Ingrese un número para calcular su raíz cuadrada: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
    } else {
        double resultado = std::sqrt(numero);
        std::cout << "La raíz cuadrada de " << numero << " es " << resultado << std::endl;
    }
    retun 0;
}