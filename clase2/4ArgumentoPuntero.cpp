#include <iostream>

// Función que toma un puntero como argumento
void modificarValor(int* ptr) {
    // Verificar si el puntero no es nulo
    if (ptr != nullptr) {
        // Modificar el valor al que apunta el puntero
        *ptr = 100;
    }
}

int main() {
    int numero = 42;

    std::cout << "Valor antes de llamar a la función: " << numero << std::endl;

    // Llamar a la función y pasarle la dirección de memoria de la variable 'numero'
    modificarValor(&numero);

    std::cout << "Valor después de llamar a la función: " << numero << std::endl;

    return 0;
}
