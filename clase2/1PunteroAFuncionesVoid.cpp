#include<iostream>
using namespace std;
void miFuncion(int parametro) {
	// Código de la función
	std::cout<<"Imprime";
}

void mf(int c){
	// Código de la función
	std::cout<<c;
}

int main() {
	void (*foo)(int); // Declaración de un puntero a una función que toma un parámetro entero y no devuelve valor
	foo = miFuncion; // Asignando la dirección de la función miFuncion al puntero foo
	foo(10); // Llamando a la función a través del puntero
	foo = mf; // Asignando la dirección de la función miFuncion al puntero foo
	foo(3); // Llamando a la función a través del puntero
	return 0;
}
