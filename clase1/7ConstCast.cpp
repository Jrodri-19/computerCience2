#include <iostream>
/*
Esta conversión se utiliza para agregar o
 quitar la calificación de constante a un objeto.
 Es útil cuando necesitas trabajar con punteros a 
datos que son const, pero necesitas modificarlos de alguna manera.
*/
using namespace std;
int main() {
	const int num = 10;
	int *ptr = const_cast<int*>(&num);
	// Se imprime el valor del entero como si fuera un double
	cout <<  *ptr << std::endl;
	return 0;
}
