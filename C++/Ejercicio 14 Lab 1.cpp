//Geovany Javier Ardon Vega
#include<iostream>
#include<string.h>
using namespace std;
int palindroma(char cadena[],int ini, int fin); 

int main( void ){
    char cadena[100];
    int numero;

    
    cout<<"Ingrese una palabra: ";
    cin.getline(cadena,50);
    
    numero=strlen(cadena);
    numero=palindroma(cadena,0,numero-1);
    
	if(numero==1)
    cout<<"La palabra es palindroma";
    else if(numero==0)
    cout<<"La palabra no es Palindroma";
 
    return 0;
}

int palindroma(char cadena2[],int inicio, int final){
     if(inicio >= final){
     
          return 1;
	}
     if(cadena2[inicio] == cadena2[final]){
     
          palindroma(cadena2, inicio+1, final-1);
      }
    
	else return 0;
}
