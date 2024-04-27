#include <iostream>
using namespace std;
double getAverage(int m[4][3]) {
	float suma = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			suma += m[i][j];
		}
	}
	int total = 4 * 3; // Número total de elementos en la matriz
	double promedio = static_cast<double>(suma) / total; // Casting de suma a double para realizar la división
	return promedio;
}

int main() {
	int m[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
	cout<<getAverage(m);
	return 0;
}
