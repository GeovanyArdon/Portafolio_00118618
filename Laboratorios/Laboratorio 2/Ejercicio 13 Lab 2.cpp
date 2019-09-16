//Geovany Javier Ardon Vega 00118618
#include <iostream>
using namespace std;
int recursiva (int n);
int iterativa (int);

int main (){
    int n;
    cout<<"Digite un numero:";
    cin>>n;
   
    iterativa (n);
    recursiva (n);
    cout<<recursiva (n)<<endl;
   
    cout<<iterativa (n)<<endl;
   
    return 0;
}

int recursiva (int n){
   
    if(n==0)
        return(0);
   
    return(n + recursiva (n-1));
}

int iterativa (int n){
    int contador=0;
    for (int i=0;i<n;i++){
        contador++;
        contador+=i;
       
    }
   
    return contador;
}

