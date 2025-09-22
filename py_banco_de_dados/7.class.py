import sqlite3

class Agenda:
    def __init__(self, arquivo, nome_tabela):
        self.nome_tabela = nome_tabela
        self.arquivo = arquivo
        self.conexao = sqlite3.connect(arquivo)
        self.cursor = self.conexao.cursor()

    def criar_tabela(self):
        self.cursor.execute(f"""
                        CREATE TABLE IF NOT EXISTS {self.nome_tabela} (
                        id integer PRIMARY KEY,
                        texto text
                        )
                       """
        )

    def cadastrar(self, texto):
        self.cursor.execute(f"INSERT INTO {self.nome_tabela}(texto) VALUES (?)",(texto,))
        self.conexao.commit()

    def lista(self):
        self.cursor.execute(f"SELECT * FROM {self.nome_tabela}")
        resultado = self.cursor.fetchall()
        return resultado


    def fechar(self):
        self.conexao.close()

banco1 = Agenda("banco1.db", "agenda")
banco1.criar_tabela()
banco1.cadastrar("Dado de Teste!!!")
lista = banco1.lista()
if lista:
    for i, j in lista:
        print(i, j)
else:
    print("Nada cadastrado.")

banco1.fechar()

