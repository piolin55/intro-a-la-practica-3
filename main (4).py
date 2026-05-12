class Nodo:
    def __init__(self, dato):
        self.dato = dato
        self.siguiente = None


class Lista:
    def __init__(self):
        self.cabeza = None

    def insertar_inicio(self, valor):
        nuevo = Nodo(valor)
        nuevo.siguiente = self.cabeza
        self.cabeza = nuevo

    def insertar_final(self, valor):
        nuevo = Nodo(valor)

        if self.cabeza is None:
            self.cabeza = nuevo
            return

        temp = self.cabeza

        while temp.siguiente:
            temp = temp.siguiente

        temp.siguiente = nuevo

    def eliminar_inicio(self):
        if self.cabeza is None:
            print("Lista vacia")
            return

        self.cabeza = self.cabeza.siguiente

    def mostrar(self):
        temp = self.cabeza

        print("Lista:", end=" ")

        while temp:
            print(temp.dato, end=" ")
            temp = temp.siguiente

        print()


lista = Lista()

lista.insertar_inicio(8)
lista.insertar_inicio(4)

lista.insertar_final(11)

lista.mostrar()

lista.eliminar_inicio()

print("Recorrido final:")
lista.mostrar()