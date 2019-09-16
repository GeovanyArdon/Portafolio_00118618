#include <iostream>
#include <cmath>
using namespace std;
void recursivo(int,double,double,int);

int main(){
    int n,i;
    cout<<"Ingrese x: ";
    cin>>n;
	i=1;
	
    double R=0;
    double f;
   
    
    for(int i=1; i<=15; i++){
        f =double ((pow(-1,i-1)*pow(n,i))/i);
        R = R+f;
    }
    cout<<endl<<R;
    cout<<endl;
    recursivo (n,f,R,i);
    return 0;
    
}

void recursivo (int n,double f, double R,int i){
	
	
	if (i==15){
	
	f =double ((pow(-1,i-1)*pow(n,i))/i);
    R = R+f;
    recursivo(n,f,R,i+1);
	}
	cout<<R;
}
