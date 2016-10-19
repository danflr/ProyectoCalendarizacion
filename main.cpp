#include <iostream>
#include <stdlib.h>
#include "list.h"

using namespace std;
list * lista = new list;
void imprimeMenu(){
    cout << ".:Calendarizaci�n de procesos:." << endl
         << "1.-Llenado de lista." << endl
         << "2.-Algoritmo FIFO" << endl
         << "3.-Algoritmo SJF" << endl
         << "4.-Algoritmo Round-Robin" << endl
         << "5.-Algoritmo por prioridad" << endl
         << "6.-Salir." << endl
         << "Elige una opci�n: ";
}

void crearProcesos(){
    char sel, nombre; int tiempo, priori;
    cout << endl << "Creaci�n de procesos";
    do {
        cout << endl << "Inserte caracter de proceso: ";
        cin >> nombre;
        cout << "Inserte tiempo del proceso: ";
        cin >> tiempo;
        cout << "Inserte prioridad del proceso: ";
        cin >> priori;
        lista->insertar(tiempo, priori, nombre);
        cout << "Continuar agregando procesos? (s/n): ";
        cin >> sel;
    } while(sel != 'n');
    if(sel == 'n'){
        lista->imprimir();
    }
}



int main(){
    int opc;
    do {
        imprimeMenu();
        cin >> opc;
        switch(opc){
            case 1: crearProcesos(); break;
            case 2: lista->impresionFIFO(); break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: cout << "Saliendo..." << endl; delete lista; break;
            default: cout << "Opci�n no v�lida, intente de nuevo"; break;

        }
    } while(opc != 6);
    return 0;
}
