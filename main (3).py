class Cola:
    def __init__(self):
        self.datos = []

    def enqueue(self, valor):
        self.datos.append(valor)

    def dequeue(self):
        if len(self.datos) == 0:
            print("Cola vacia")
            return
        print("Elemento eliminado:", self.datos.pop(0))

    def mostrar_frente(self):
        if len(self.datos) == 0:
            print("Cola vacia")
            return
        print("Frente:", self.datos[0])

    def recorrer(self):
        print("Elementos de la cola:", self.datos)


cola = Cola()

cola.enqueue(3)
cola.enqueue(6)
cola.enqueue(9)
cola.enqueue(12)

cola.recorrer()

cola.dequeue()

cola.mostrar_frente()

print("Estado final:")
cola.recorrer()