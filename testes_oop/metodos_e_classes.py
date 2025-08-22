class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def apresentacao(self):
        return f"Nome:{self.nome} | Idade: {self.idade}"

class Gerente(Pessoa):
    def __init__(self, nome, idade, senha=123):
        super().__init__(nome, idade)
        self.__senha = senha

    def apresentacao(self):
        return f"Nome: {self.nome} | Idade: {self.idade} | Função: Gerente"

    @property
    def get_senha(self):
        return f"{self.nome} - {self.__senha}"

    @get_senha.setter
    def get_senha(self, valor):
        self.__senha = valor

class Funcionario(Pessoa):
    def __init__(self, nome, idade, funcao):
        super().__init__(nome, idade)
        self.funcao = funcao

    def apresentacao(self):
        return f"Nome: {self.nome} | Idade: {self.idade} | Função: {self.funcao}"

class Departamento:
    def __init__(self, nome):
        self.nome = nome
        self.lista_pessoas = []

    def adicionar_pessoa(self, pessoa):
        self.lista_pessoas.append(pessoa)

