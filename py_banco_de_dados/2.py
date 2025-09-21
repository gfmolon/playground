import sqlite3

conexao = sqlite3.connect("banco.db")

cursor = conexao.cursor()

cursor.execute("""
    CREATE TABLE IF NOT EXISTS usuarios (
        id integer,
        nome text,
        cidade text,
        telefone int
    )
"""
)

cursor.execute("INSERT INTO usuarios (id, nome, cidade, telefone) VALUES (?,?,?,?)", (1,"Gui","Caxias do Sul", 123456))

conexao.commit() # so depois das operacoes CRUD

cursor.execute("SELECT * FROM usuarios WHERE id = ?", (1,))
# so depois dos select...
consulta = cursor.fetchall()

for i in consulta:
    print(i)

conexao.close()

