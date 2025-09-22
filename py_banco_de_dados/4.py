import sqlite3

conexao = sqlite3.connect("arquivo.db")
cursor = conexao.cursor()

cursor.execute("""
                CREATE TABLE IF NOT EXISTS agenda (
                    id integer PRIMARY KEY,
                    nome text,
                    telefone integer
                )
                """)

cadastrar = input("Cadastrar? (S/N)").upper()
while cadastrar == "S":
    nome = input("Informe o nome:")
    telefone = int(input("Informe o telefone"))
    cursor.execute("INSERT INTO agenda (nome, telefone) VALUES (?, ?)", (nome,telefone))
    conexao.commit()
    continuar = input("Continuar? (S/N)").upper()
    if continuar != "S":
        break

cursor.execute("SELECT * FROM agenda")
lista = cursor.fetchall()

if lista:
    print("Lista de contatos cadastrados:\n");
    for i,j, k in lista:
        print(f"{i} -> {j} - {k}")
else:
    print("Nenhum contato cadastrado na agenda.\n")
conexao.close()
