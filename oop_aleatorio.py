class Animal:
    def __init__(self, nome, tipo):
        self.__nome = nome
        self.__tipo = tipo

# Encapsulamento
    @property
    def nome(self):
        return self.__nome

    @nome.setter
    def nome(self, valor):
        self.__nome = valor

    @property
    def tipo(self):
        return self.__tipo

    @tipo.setter
    def tipo(self, valor):
        self.__tipo = valor

    def mostrar_dados(self):
        return f"{self.nome} - {self.tipo}"

# Heranca
class Pet(Animal):
    def __init__(self, nome, tipo, atributoPet):
        super().__init__(nome, tipo)
        self.atributoPet = atributoPet

    def mostrar_dados(self):
        return f"{self.nome} - {self.tipo} -> {self.atributoPet}"


a1 = Animal("NomeAnimal", "Tipo")
p1 = Pet("NomeAnimal2", "ASDASDasd", "asdasdasd")

lista = [a1, p1]

# Polimorfismo
for i in lista:
    print(f"{i.mostrar_dados()}")

