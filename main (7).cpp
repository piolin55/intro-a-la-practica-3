#include <iostream>
using namespace std;

#define MAX 10

class Pila {
private:
    int datos[MAX];
    int tope;

public:
    Pila() {
        tope = -1;
    }

    void push(int valor) {
        if (tope == MAX - 1) {
            cout << "Pila llena" << endl;
            return;
        }
        datos[++tope] = valor;
    }

    void pop() {
        if (tope == -1) {
            cout << "Pila vacia" << endl;
            return;
        }
        cout << "Elemento eliminado: " << datos[tope--] << endl;
    }

    void mostrarTope() {
        if (tope == -1) {
            cout << "Pila vacia" << endl;
            return;
        }
        cout << "Tope: " << datos[tope] << endl;
    }

    void recorrer() {
        if (tope == -1) {
            cout << "Pila vacia" << endl;
            return;
        }

        cout << "Elementos de la pila: ";
        for (int i = tope; i >= 0; i--) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Pila pila;

    pila.push(5);
    pila.push(10);
    pila.push(15);
    pila.push(20);
    pila.push(25);

    pila.recorrer();

    pila.pop();
    pila.pop();

    pila.mostrarTope();

    cout << "Estado final:" << endl;
    pila.recorrer();

    return 0;
}