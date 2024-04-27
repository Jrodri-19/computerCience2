#include <iostream>
using namespace std;

int main() {
	//ref &
	int x = 10;
	int &ref = x; // ref es una referencia a x
	//desref *
	int y = 10;
	int *ptr = &y; // ptr apunta a la dirección de memoria de y
	int valor = *ptr; // Desreferencia ptr, obtiene el valor de y
	//ref &refPtr
	int z = 10;
	int *ptr1 = &z; // ptr es un puntero a x
	int *&refPtr = ptr1; // refPtr es una referencia a ptr
	//desref *
	int a = 10;
	int *ptra = &a; // ptr apunta a la dirección de memoria de x
	int valor2 = *ptra; // Desreferencia ptr, obtiene el valor de x
	
	return 0;
}
