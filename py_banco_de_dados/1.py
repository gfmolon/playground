import sqlite3

conexao = sqlite3.connect("banco.db")

cursor = conexao.cursor()

cursor.execute("""
CREATE TABLE IF NOT EXISTS usuarios (
    id integer primary key autoincrement,
    nome text,
    email text
)
"""
)

cursor.execute("INSERT INTO usuarios (nome, email) VALUES (?,?)", ("Joao", "joao@teste.com.br"))

conexao.commit()

print("Lista de Usuários:")
cursor.execute("SELECT * FROM usuarios")
for codigo, nome, email in cursor.fetchall():
    print(f"{codigo} | {nome} | {email}")


conexao.close()
