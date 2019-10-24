#include <iostream>
#include <string>
#include <string.h>
using namespace std;


struct TPasatiempo{
	int isbn;
    string nombre;
    string carnet;
    string apellido;
    string edad;
    string numero;
    string correo;
};
typedef struct TPasatiempo Pasatiempo;



Pasatiempo solicitarPasatiempo(){
    Pasatiempo p;
    cout << "Carnet: ";   cin >> p.isbn;
    cin.ignore();
	cout << "Nombre: "; cin >> p.nombre;
    cout<< "Apellido: "; cin >>p.apellido;
    cout << "Edad: "; cin >> p.edad;
    cout <<"Numero de telefono: ";cin>>p.numero;
    cout<<"Correo electronico: ";cin>>p.correo;
    
    return p;
}

void mostrarPasatiempo(Pasatiempo p){
     cout << "carnet: " << p.isbn << endl;
	cout << "Nombre: " << p.nombre << endl;
   	cout << "Apellido: "<<p.apellido <<endl;
    cout << "Edad: " << p.edad << endl;
    cout<< "Numero de telefono: "<<p.numero<<endl;
    cout<<"Correo electronico: "<<p.correo<<endl;
    
    cout << endl;
}

struct TNodo{
    Pasatiempo dato;
    struct TNodo *sig;
};



typedef struct TNodo Nodo;
Nodo *pInicio;


void insertarInicio(Pasatiempo p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void eliminarPersona(){
    int unISBN = 0;
    cout << "Carnet de persona a eliminar (INGRESAR CARNET): ";
    cin >> unISBN;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).isbn != unISBN){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "\n----> Persona a borrar NO existe (VERIFICAR SI SE ESCRIBIO BIEN EL CARNET) <-----" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona borrada!" << endl;
}


void insertarFinal(Pasatiempo p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void mostrarListaActualizada() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPasatiempo(s->dato);
        s = s->sig;
    }
}



void agregarPasatiempo(){
    Pasatiempo p = solicitarPasatiempo();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);
                continuar = false;
            break;
            case 2: insertarFinal(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}




void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPasatiempo(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    bool continuar = true;
    int persona;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) LLenar Lista\n\t2) Ver Lista"
            << "\n\t3) Salir\n\t4) Actualizar\n\t5) Borrar Persona\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPasatiempo();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            case 4:	cout<<endl;
					cout<<"Actualizando..."<<endl;
					cout<<endl;
            		mostrarListaActualizada();
            break;
            case 5: cout << "Eliminando..." << endl;
                	eliminarPersona();
					
            		
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
