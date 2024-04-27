#include <iostream>
using namespace std;

int main() {
	int *ptr; // Declaración de un puntero a un entero
	float *ptr1, *ptr2; // Declaración de dos punteros a punto flotante
	char *charPtr; // Declaración de un puntero a un carácter
	const int *constPtr; // Declaración de un puntero constante a un entero
	int x = 10;
	int *ptr3 = &x; // Inicialización de un puntero con la dirección de memoria de 'x'
	int *nullPtr = nullptr; // Declaración de un puntero nulo
	double *ptr4; // Declaración de un puntero a un valor double
	double x2 = 10.5;
	int y = static_cast<int>(x2);
	
	return 0;
}
