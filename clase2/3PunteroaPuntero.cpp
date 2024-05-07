#include <iostream>

int main() {
    int numero = 42;
    int* punteroNumero = &numero; // Puntero a int

    int** punteroAPuntero = &punteroNumero; // Puntero a puntero

    // Imprimir el valor del puntero a puntero
    std::cout << "Valor del puntero a puntero: " << punteroAPuntero << std::endl;

    // Imprimir el valor del puntero apuntado por el puntero a puntero
    std::cout << "Valor del puntero apuntado por el puntero a puntero: " << *punteroAPuntero << std::endl;

    // Imprimir el valor apuntado por el puntero apuntado por el puntero a puntero
    std::cout << "Valor apuntado por el puntero apuntado por el puntero a puntero: " << **punteroAPuntero << std::endl;

    return 0;
}
