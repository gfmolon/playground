

def novo_curso_lista():
    lista = []
    
    while True:
        nome_curso = input("Nome do Curso")
        valor_curso = float(input("Valor do Curso"))
        registro = [nome_curso, valor_curso]
        lista.append(registro)
        continuar = input("Continuar cadastrando? (S/N)").upper()
        if continuar == "N":
            break

    return lista

def novo_curso_dic():
    lista = []
    while True:
        nome_curso = input("Nome do Curso")
        valor_curso = float(input("Valor do Curso"))
        registro = {f"curso":nome_curso, "valor":valor_curso}
        lista.append(registro)
        continuar = input("Continuar cadastrando? (S/N)").upper()
        if continuar == "N":
            break

    return lista

lista_lista = novo_curso_lista()
lista_dic = novo_curso_dic()

for curso, valor in lista_lista:
    print(curso)
    print(valor)

for i in lista_dic:
    print(i["curso"])
    print(i["valor"])
