#include <iostream>
using namespace std;
/*	Referencia de punteros:
Una referencia a un puntero es una forma de crear un 
alias para un puntero existente.
Se declara utilizando el operador & después del tipo de dato.
La referencia de punteros se asocia con el puntero 
durante su inicialización y no puede cambiar de 
objetivo una vez inicializada.
La sintaxis de una referencia de puntero permite el
acceso directo al puntero subyacente sin necesidad de
usar el operador de indirección.
*/

/*	Desreferencia de punteros:
La desreferencia de punteros se refiere al proceso de  
acceder al valor almacenado en la dirección de 
memoria apuntada por un puntero.
Se realiza utilizando el operador de indirección *.
Permite acceder al valor real al que apunta el puntero, 
en lugar de a la dirección de memoria.
La desreferenciación se utiliza para leer o modificar el
valor al que apunta un puntero.

*/
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
