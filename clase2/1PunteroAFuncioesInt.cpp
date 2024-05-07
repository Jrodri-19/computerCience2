#include <iostream>

// Declaración de una función que toma un entero y devuelve su cuadrado
int cuadrado(int x) {
    return x * x;
}

int main() {
    // Declaración de un puntero a función que toma un entero y devuelve un entero
    int (*ptrFuncion)(int);
    
    // Asignación de la dirección de la función cuadrado al puntero ptrFuncion
    ptrFuncion = &cuadrado;
    
    // Uso del puntero a función para llamar a la función cuadrado
    int resultado = ptrFuncion(5); // Esto es equivalente a cuadrado(5)
    
    std::cout << "El cuadrado de 5 es: " << resultado << std::endl;
    
    return 0;
}
