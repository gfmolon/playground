import sqlite3

conexao = sqlite3.connect("banco.db")

cursor = conexao.cursor()

cursor.execute("""CREATE TABLE IF NOT EXISTS todo(
    id integer PRIMARY KEY,
    nota text
)"""
               )

cursor.execute("INSERT INTO todo (nota) VALUES (?)" ,("teste",))

cursor.execute("SELECT * FROM todo")

resultados = cursor.fetchall()

if resultados:
    for i, j in resultados:
        print(i, j)
else:
    print("Nada cadastrado.")

conexao.close()

