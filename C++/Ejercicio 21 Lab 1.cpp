//Geovany Javier Ardon Vega 00118618
#include <iostream>

using namespace std;

int main () {
	int fila=5,columna=5;
	int matriz[100][100],*p;
	p=&matriz[0][0];		
	
											//llenamos la matriz con 0	
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			matriz[i][j]=0;
		}
	}
	
	cout<<"---Matriz Inicializada en 0 ---"<<endl;
	cout<<endl;
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			cout<<*p<<" ";        //usamos puntero para imprimir la matriz
		}
		cout<<endl;
	}
	cout<<endl;
									//llenamos la matriz solo con valores de la matriz inferior
	for (int i=0;i<1;i++){
		for (int j=0;j<1;j++){
			cout<<"Ingrese valor en casilla ["<<i<<"]["<<j<<"]: " ;
			cin>>matriz[i][j];
		}
	}
	
	for (int i=1;i<2;i++){
		for (int j=0;j<2;j++){
			cout<<"Ingrese valor en casilla ["<<i<<"]["<<j<<"]: " ;
			cin>>matriz[i][j];
		}
	}
	
	for (int i=2;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Ingrese valor en casilla ["<<i<<"]["<<j<<"]: " ;
			cin>>matriz[i][j];
		}
	}
	
	for (int i=3;i<4;i++){
		for (int j=0;j<4;j++){
			cout<<"Ingrese valor en casilla ["<<i<<"]["<<j<<"]: " ;
			cin>>matriz[i][j];
		}
	}
	
	for (int i=4;i<5;i++){
		for (int j=0;j<5;j++){
			cout<<"Ingrese valor en casilla ["<<i<<"]["<<j<<"]: " ;
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl;
		
	cout<<"--Matriz diagonal estrictamente inferior--"<<endl;

									
	for (int i=0;i<5;i++){				//imprimimos la matriz estrictamente inferior
		for (int j=0;j<5;j++){
			cout<<matriz[i][j]<<" ";	
		}
		cout<<endl;
	}
	
	
	return 0;	
}
	
	
	


	

	
