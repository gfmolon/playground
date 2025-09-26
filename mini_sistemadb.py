import sqlite3

conexao = sqlite3.connect("banco.db")
cursor = conexao.cursor()

cursor.execute("""CREATE TABLE IF NOT EXISTS usuario(
                id integer,
                nome text,
                CONSTRAINT PKUsuario PRIMARY KEY(id) 
               )
               """)


#cursor.execute("INSERT INTO usuario(id, nome) VALUES (?,?)", (3,"Joao da Silva Sauro 2"))
#conexao.commit()


cursor.execute("SELECT * FROM usuario")
resultado = cursor.fetchall()

for usuario in resultado:
    print(usuario)

conexao.close()




