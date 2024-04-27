#include <iostream>
using namespace std;


int main() {
	int n = 0;
	scanf("%d", &n); // Leemos un entero desde la entrada estándar
	
	int* pn = nullptr;
	pn = &n;
	
	printf("%d", *pn); // Imprimimos el valor de n usando printf
	
	return 0;
}
