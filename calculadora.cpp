#include <iostream>
#include <cmath>

int main() {
    double numero;
    std::cout << "Ingrese un número para calcular su raíz cuadrada y su logaritmo natural: ";
    std::cin >> numero;

    // Raíz cuadrada
    if (numero < 0) {
        std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
    } else {
        double resultado_sqrt = std::sqrt(numero);
        std::cout << "La raíz cuadrada de " << numero << " es " << resultado_sqrt << std::endl;
    }

    // Logaritmo natural
    if (numero <= 0) {
        std::cout << "Error: No se puede calcular el logaritmo natural de un número menor o igual a cero." << std::endl;
    } else {
        double resultado_log = std::log(numero);
        std::cout << "El logaritmo natural de " << numero << " es " << resultado_log << std::endl;
    }
    return 0;
}