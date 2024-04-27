#include <iostream>
/*
reinterpret_cast permite conversiones entre 
tipos que no están relacionados o que pueden no ser seguras 
desde el punto de vista del tipo.

Se recomienda utilizarlo solo cuando sea absolutamente 
necesario y cuando estés seguro de que la conversión es 
segura en el contexto específico de tu programa.

*/
int main() {
	int *intptr = new int(42); // Se crea un entero en el montón con valor 42 y se asigna su dirección a intptr
	
	// Se reinterpret el puntero a int como un puntero a double
	double *doubleptr = reinterpret_cast<double*>(intptr);
	
	// Se imprime el valor del entero como si fuera un double
	std::cout << "El valor reinterpretado como double es: " << *doubleptr << std::endl;
	
	delete intptr; // Se libera la memoria asignada en el montón
	return 0;
}
