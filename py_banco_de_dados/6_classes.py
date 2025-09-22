import sqlite3

class Agenda:
    def __init__(self, arquivo):
        # Conecta no banco e cria a tabela se não existir
        self.conexao = sqlite3.connect(arquivo)
        self.cursor = self.conexao.cursor()
        self.cursor.execute("""
            CREATE TABLE IF NOT EXISTS agenda (
                id INTEGER PRIMARY KEY,
                nome TEXT,
                telefone INTEGER
            )
        """)
        self.conexao.commit()

    def cadastrar(self, nome, telefone):
        # Insere um novo contato
        self.cursor.execute("INSERT INTO agenda (nome, telefone) VALUES (?, ?)", (nome, telefone))
        self.conexao.commit()

    def listar(self):
        # Busca todos os contatos
        self.cursor.execute("SELECT * FROM agenda")
        return self.cursor.fetchall()

    def fechar(self):
        # Fecha a conexão
        self.conexao.close()


# Programa principal
def main():
    agenda = Agenda("arquivo.db")

    cadastrar = input("Cadastrar? (S/N) ").upper()
    while cadastrar == "S":
        nome = input("Informe o nome: ")
        telefone = int(input("Informe o telefone: "))
        agenda.cadastrar(nome, telefone)

        continuar = input("Continuar? (S/N) ").upper()
        if continuar != "S":
            break

    lista = agenda.listar()
    if lista:
        print("Lista de contatos cadastrados:\n")
        for i, j, k in lista:
            print(f"{i} -> {j} - {k}")
    else:
        print("Nenhum contato cadastrado na agenda.\n")

    agenda.fechar()


if __name__ == "__main__":
    main()
