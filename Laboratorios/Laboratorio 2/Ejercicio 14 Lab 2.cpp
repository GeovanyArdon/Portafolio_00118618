//Geovany Javier Ardon Vega 00118618
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

int fil,col,n,m;

cout<< "Introduce el tamano de filas: ";
cin>>fil;
cout<<"Introduzca el tamano de columnas: ";
cin>>col;

float a[fil][col],b[fil-1][col-1];


for (int i=0;i<fil;i++){
	for (int j=0;j<col;j++){
		cout<<"Ingrese valor ["<<i<<"]["<<j<<"]: ";
		
		cin >> a[i][j];
	}
}
cout<<endl;
cout<<"------Matriz------"<<endl;

for (int i=0;i<fil;i++){
	for (int j=0;j<col;j++){		
		cout << a[i][j]<<" ";
	}
	cout<<endl;
}

cout<<endl;
cout<<"Introduce la fila a eliminar: "<<endl;
cin>>n;
cout<<"Introduce la columna a eliminar: "<<endl;
cin>>m;

for (int i=n-1;i<fil;i++){
	for (int j=0;j<col;j++){
		a[i][j]=a[i+1][j];
	}
}

for (int i=0;i<fil;i++){
	for (int j=m-1;j<col;j++){
		a[i][j]=a[i][j+1];
	}
}

for (int i=0;i<fil-1;i++){
	for (int j=0;j<col-1;j++){
		b[i][j]=a[i][j];
	}
}

cout<<" La matriz resultante es :"<<" "<<endl;

for (int i=0;i<fil-1;i++){
	for (int j=0;j<col-1;j++){
	cout << b[i][j]<<"   ";
	}
	cout<<endl<<endl;
}

return 0;
}
