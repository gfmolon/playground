import sqlite3

conexao = sqlite3.connect("banco.db")

cursor = conexao.cursor()

cursor.execute("""
            CREATE TABLE IF NOT EXISTS usuarios (
            id integer PRIMARY KEY,
            nome text,
            telefone integer
            )
               """
)
conexao.commit()

def exibir(resultado):
    if resultado:
        for i, j, k in resultado:
            print(i,j,k)


cursor.execute("INSERT INTO usuarios(nome, telefone) VALUES (?,?)",("Joao", 123455))
conexao.commit()

cursor.execute("SELECT * FROM usuarios")
resultado = cursor.fetchall()

conexao.commit()
exibir(resultado)

cursor.execute("DELETE from usuarios WHERE id = ?", (7,))
conexao.commit()

cursor.execute("SELECT * FROM usuarios")
resultado = cursor.fetchall()
exibir(resultado)


cursor.execute("UPDATE usuarios SET nome = ? WHERE id = ?", ("Joao423423",25))
conexao.commit()

cursor.execute("SELECT * FROM usuarios")
resultado = cursor.fetchall()
exibir(resultado)

conexao.close()

