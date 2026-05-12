#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Lista {
private:
    Nodo* cabeza;

public:
    Lista() {
        cabeza = NULL;
    }

    void insertarInicio(int valor) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = valor;
        nuevo->siguiente = cabeza;
        cabeza = nuevo;
    }

    void insertarFinal(int valor) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo;
            return;
        }

        Nodo* temp = cabeza;

        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }

        temp->siguiente = nuevo;
    }

    void eliminarInicio() {
        if (cabeza == NULL) {
            cout << "Lista vacia" << endl;
            return;
        }

        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;

        delete temp;
    }

    void mostrar() {
        Nodo* temp = cabeza;

        cout << "Lista: ";

        while (temp != NULL) {
            cout << temp->dato << " ";
            temp = temp->siguiente;
        }

        cout << endl;
    }
};

int main() {
    Lista lista;

    lista.insertarInicio(8);
    lista.insertarInicio(4);

    lista.insertarFinal(11);

    lista.mostrar();

    lista.eliminarInicio();

    cout << "Recorrido final:" << endl;
    lista.mostrar();

    return 0;
}