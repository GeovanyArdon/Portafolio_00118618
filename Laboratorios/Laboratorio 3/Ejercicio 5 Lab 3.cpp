#include <iostream>
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
    void insAntes_1(int, int);
    void insertarInicioLista(int);
    void mostrarLista(void);
    void mostrarListaRec(void);
    void mostrarListaRec(nodo *);
    void insFinal(int);
   
};

ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}


void ListaSimple::insAntes_1(int dato, int datoRef) {
    nodo *nuevo, *p, *q;

    nuevo = new nodo;
    nuevo->dato = dato;

    p = pInicio;
    q = NULL;
    while (p != NULL && p->dato != datoRef) {
        q = p;
        p = p->sig;
    }
    if (q == NULL) {
        if (p == NULL) {
            pInicio = nuevo;
            pInicio->sig = NULL;
        } else {
            pInicio = nuevo;
            pInicio->sig = p;
        }
    } else {
        if (p == NULL) {
            q->sig = nuevo;
            nuevo->sig = NULL;
        } else {
            q->sig = nuevo;
            nuevo->sig = p;
        }
    }
}

void ListaSimple::insertarInicioLista(int dato) {
    nodo *nuevo;

    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::mostrarLista(void) {
    nodo *s = pInicio;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
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


void ListaSimple::insFinal(int dato) {
    nodo *p, *q;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

int main(void)
{
    ListaSimple miLista;
    char resp;
    int dato, datoRef, datoBuscar;
   
    cout << "Desea meter un dato (s/n)?: ";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        miLista.insAntes_1(dato, datoRef); //insertarInicioLista(dato);
        cout << "Desea meter un dato (s/n)?: ";
        cin>> resp;
    }    
   
    cout << "Mostrar lista:" << endl;
    miLista.mostrarLista();
    cout << "\nMostrar lista inverso (recursivo):" << endl;
    miLista.mostrarListaRec();

    return 0;
}
