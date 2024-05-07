#include <iostream>

int main() {
    int entero = 42;
    double decimal = 3.14;
    char caracter = 'A';

    void* punteroVoid; // Declaración de un puntero void

    punteroVoid = &entero; // Asignar la dirección de la variable entero al puntero void
    std::cout << "Valor entero: " << *(static_cast<int*>(punteroVoid)) << std::endl;

    punteroVoid = &decimal; // Asignar la dirección de la variable decimal al puntero void
    std::cout << "Valor decimal: " << *(static_cast<double*>(punteroVoid)) << std::endl;

    punteroVoid = &caracter; // Asignar la dirección de la variable caracter al puntero void
    std::cout << "Valor caracter: " << *(static_cast<char*>(punteroVoid)) << std::endl;

    return 0;
}
