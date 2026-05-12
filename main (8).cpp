#include <iostream>
using namespace std;

#define MAX 10

class Cola {
private:
    int datos[MAX];
    int frente, final;

public:
    Cola() {
        frente = 0;
        final = -1;
    }

    void enqueue(int valor) {
        if (final == MAX - 1) {
            cout << "Cola llena" << endl;
            return;
        }
        datos[++final] = valor;
    }

    void dequeue() {
        if (frente > final) {
            cout << "Cola vacia" << endl;
            return;
        }
        cout << "Elemento eliminado: " << datos[frente++] << endl;
    }

    void mostrarFrente() {
        if (frente > final) {
            cout << "Cola vacia" << endl;
            return;
        }
        cout << "Frente: " << datos[frente] << endl;
    }

    void recorrer() {
        if (frente > final) {
            cout << "Cola vacia" << endl;
            return;
        }

        cout << "Elementos de la cola: ";
        for (int i = frente; i <= final; i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Cola cola;

    cola.enqueue(3);
    cola.enqueue(6);
    cola.enqueue(9);
    cola.enqueue(12);

    cola.recorrer();

    cola.dequeue();

    cola.mostrarFrente();

    cout << "Estado final:" << endl;
    cola.recorrer();

    return 0;
}