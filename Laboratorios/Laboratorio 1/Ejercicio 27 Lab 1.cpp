//Geovany Javier Ardon Vega
#include<iostream>
using namespace std;

struct complejo{
	float real,imaginaria;
}z1,z2;

void pedirDatos();
complejo multiplicacion(complejo,complejo);

int main(){
	pedirDatos();
	complejo x = multiplicacion(z1,z2);	
	return 0;
} 

void pedirDatos(){
	cout<<"Digite el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"Parte Imaginaria: "; cin>>z1.imaginaria;
	cout<<endl;
	cout<<"Digite el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"Parte Imaginaria: "; cin>>z2.imaginaria;
	cout<<endl;
}

complejo multiplicacion(complejo z1,complejo z2){
	int x3,y3;
	
	x3 = z1.real * z2.real - z1.imaginaria * z2.imaginaria;
   	y3 = z1.real * z2.imaginaria + z1.imaginaria * z2.real;
   	cout<<endl;
	cout<<"Resultado: "<<x3<<" + "<<y3<<"i";
}







