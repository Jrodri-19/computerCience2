//arreqlo unidimensional
#include <iostream>
using namespace std;
float getAverage(int m[4][3]) { // Corregido el tamaño del segundo índice en la función getAverage
	float suma = 0;
	for (int i = 0; i < 4; i++) { // Corregido el uso de coma ',' en los bucles for
		for (int j = 0; j < 3; j++) { // Corregido el uso de coma ',' en los bucles for
			suma += m[i][j]; // Acceso correcto al elemento de la matriz
		}
	}
	float promedio = suma / 12; // 12 es el número total de elementos (4x3) en la matriz
	return promedio;
}
int main() {
	int m[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	printf("%f",getAverage(m));
	return 0;
}
