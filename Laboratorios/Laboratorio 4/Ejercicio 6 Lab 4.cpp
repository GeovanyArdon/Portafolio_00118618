#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};


class ListaSimple{
	
private:
nodo *pInicio;
	
public:
	ListaSimple(void);
	void insertarInicioLista(int);
	void mostrarListaRec(void);
	void mostrarListaRec(nodo *);
	void pares(nodo *);
	void mostrarListaPar(void);
	void mostrarListaImpar(void);
	void mostrarListaRecD(void);
	void mostrarListaRecD(nodo *);
	void destruirLista(int);
	void pares(void);
	};
	
ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}
void ListaSimple::insertarInicioLista(int dato) {
    nodo *nuevo;
    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void ListaSimple::mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}



void ListaSimple::pares(void) {
    pares(pInicio);
}

void ListaSimple::pares(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
    pares(s->sig);
    }
}

void ListaSimple::mostrarListaPar(void) {
    nodo *s = pInicio;
    
    while (s != NULL ) {
        if(s->dato%2 == 0){
        cout << s->dato << " ";
		}
        s = s->sig;        

    }
}

void ListaSimple::mostrarListaImpar(void) {
    nodo *s = pInicio;

    
    while (s != NULL ) {
        if(s->dato%2 != 0){
        cout << s->dato << " ";
		}
        s = s->sig;        

    }
}

void ListaSimple::mostrarListaRecD(void) {
    mostrarListaRecD(pInicio);
}

void ListaSimple::mostrarListaRecD(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
        mostrarListaRecD(s->sig);
    }
}
void ListaSimple::destruirLista(int dato){
	  nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && p->dato != dato){
        q = p;
        p = p->sig;
    }
    if(p != NULL){
        if(q != NULL){
            q->sig = p->sig;
        }
        else{
            pInicio->sig = p->sig;
            delete p;
        }
    }
	cout<<"Lista original vacia";
}



int main()
{
    ListaSimple miLista;
    char resp;
    int dato, datoRef;
    
    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        miLista.insertarInicioLista(dato);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }   
    
    cout << "\nMostrar lista Origianl:" << endl;
    miLista.mostrarListaRec();
    cout<<endl;
    
    cout << "\nLista de pares:" << endl;
    miLista.mostrarListaPar();
    
    cout<<endl;
    cout << "\nLista de Impares:" << endl;
    miLista.mostrarListaImpar();
    
    cout<<endl;
    cout<<endl;
    cout<<"Eliminando lista original..."<<endl;
    cout<<endl;
    miLista.destruirLista(dato);
    
    return 0;
}
