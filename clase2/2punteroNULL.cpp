#include<iostream>
using namespace std;
int main() {
	/*int* pi=0;
		ERROR DE ASIGNACION A UN PUNTERO NULL
	*pi=3;                                     */
	/*int* pi=NULL;
		ERROR DE ASIGNACION A UN PUNTERO NULL
	*pi=3;                                    */
  /*  FORMA CORRECTA
	int num;
	int *pi =0;
	pi = &num;
	*pi = 0;
	cout<<*pi<<"\t"<<num;                     */
	//error		int *pi =110;
	/*error invalida conversion from int to int
	int num;
	int *p1=num;                              */
	int *P=NULL;
	(P)?cout<<"a":cout<<"b";
	cout<<"\n\n";
	(!P)?cout<<"x":cout<<"y";
	return 0;
}
