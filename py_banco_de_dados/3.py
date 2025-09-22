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

cursor.execute("INSERT INTO agenda (nome, telefone) VALUES (?, ?)", ("Joao Silva",123456))
conexao.commit()


cursor.execute("SELECT * FROM agenda")
lista = cursor.fetchall()

if lista:
    print("Lista de contatos cadastrados:\n");
    for i,j, k in lista:
        print(f"{i} -> {j} - {k}")
else:
    print("Nenhum contato cadastrado na agenda.\n")
conexao.close()
