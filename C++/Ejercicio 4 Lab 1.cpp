//Geovany Javier Ardon Vega 00118618
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main () {
	int arreglo[100];
	char cadena[100];
	int numero,*p;
	
	cout<<"Digite una frase: ";
	cin.getline(cadena,100);
	numero=strlen(cadena);
	p=&numero;

	
	for(int i=0;i<*p;i++){
		arreglo[i]=i;
	}
	
	for (int i=0;i<*p;i++){
		cout<<arreglo[i]<<endl;
	}
	
	
	getch();
	return 0;
}
