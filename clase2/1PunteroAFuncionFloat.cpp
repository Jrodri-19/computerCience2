#include <iostream>

// Declaración de una función que toma un flotante y devuelve su cuadrado
float cuadrado(float x) {
    return x * x;
}

int main() {
    // Declaración de un puntero a función que toma un flotante y devuelve un flotante
    float (*ptrFuncion)(float);
    
    // Asignación de la dirección de la función cuadrado al puntero ptrFuncion
    ptrFuncion = &cuadrado;
    
    // Uso del puntero a función para llamar a la función cuadrado
    float resultado = ptrFuncion(5.5f); // Esto es equivalente a cuadrado(5.5f)
    
    std::cout << "El cuadrado de 5.5 es: " << resultado << std::endl;
    
    return 0;
}
