dados = [["Joao", 342342342332, "São Marcos"], ["Alberto", 435345345, "Caxias do Sul"]]

for nome, telefone, cidade in dados:
    print(f"{nome}, {telefone}, {cidade}")

for item in dados:
    print(f"{item[0]}, {item[1]}, {item[2]}")


