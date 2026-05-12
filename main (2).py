class Pila:
    def __init__(self):
        self.datos = []

    def push(self, valor):
        self.datos.append(valor)

    def pop(self):
        if len(self.datos) == 0:
            print("Pila vacia")
            return
        print("Elemento eliminado:", self.datos.pop())

    def mostrar_tope(self):
        if len(self.datos) == 0:
            print("Pila vacia")
            return
        print("Tope:", self.datos[-1])

    def recorrer(self):
        print("Elementos de la pila:", self.datos[::-1])


pila = Pila()

pila.push(5)
pila.push(10)
pila.push(15)
pila.push(20)
pila.push(25)

pila.recorrer()

pila.pop()
pila.pop()

pila.mostrar_tope()

print("Estado final:")
pila.recorrer()