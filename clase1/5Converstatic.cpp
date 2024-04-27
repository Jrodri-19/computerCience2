#include <iostream>
/*
static_cast es un operador de C++ utilizado para realizar
conversiones de tipo seguro en tiempo de compilación. 

En el contexto de punteros, static_cast se puede utilizar 
para convertir un puntero de un tipo a otro siempre que exista 
una relación de herencia entre los tipos o cuando se pueda 
realizar una conversión entre los tipos de manera segura y 
definida por el usuario.

se puede utilizar para convertir punteros entre tipos primitivos,
 como convertir un puntero de int a un puntero de double, siempre
 y cuando la conversión sea segura y definida por el estándar del
 lenguaje
*/
int main() {
	int num = 10;
	double *ptrDouble;
	
	// Convertir un puntero int* a un puntero double*
	ptrDouble = static_cast<double*>(&num);
	
	// Intentar imprimir el valor apuntado por ptrDouble
	// Esto puede causar un comportamiento indefinido, ya que
	// estamos interpretando la memoria de un entero como un double.
	std::cout << "Valor apuntado por ptrDouble: " << *ptrDouble << std::endl;
	
	return 0;
}
