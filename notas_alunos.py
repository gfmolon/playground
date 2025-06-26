# REVISAO PROVA PYTHON

def coletar_alunos():
    lista = []
    while True:
        nome = input("Nome do Aluno")
        nota = float(input("Nota do Aluno"))
        if nota >= 0 and nota <= 100:
            registro = [nome, nota]
            lista.append(registro)
            continuar = input("Digite SAIR para encerrar ou outra tecla para continuar").upper()
            if continuar == "SAIR":
                break
    return lista

def classificar_aluno(nota):
    if nota >= 90:
        return "Excelente projeto."
    elif nota >= 70 and nota <= 89:
        return "Bom projeto"
    elif nota < 70:
        return "Projeto precisa de melhorias"

def relatorio_classificacao(lista):
    for nome, nota in lista:
        print(f"Aluno: {nome} - {nota} - {classificar_aluno(nota)}")

def maior_nota(lista):
    if len(lista) > 0:
        maior_nota = lista[0][1]
        maior_aluno_nota = lista[0][0]
        for nome, nota in lista:
            if nota > maior_nota:
                maior_nota = nota
                maior_aluno_nota = nome
        return f"{maior_aluno_nota}: {maior_nota}"

def menor_nota(lista):
    if len(lista) > 0:
        menor_nota = lista[0][1]
        menor_aluno_nota = lista[0][0]
        for nome, nota in lista:
            if nota < menor_nota:
                menor_nota = nota
                menor_aluno_nota = nome
        return f"{menor_aluno_nota}: {menor_nota}"

def media_geral(lista):
    if len(lista) > 0:
        soma = 0
        cont = 0
        for nome, nota in lista:
            soma += nota
            cont +=1
        media = soma/cont
        return media

def todos_bom_projeto_ou_mais(lista):
    if len(lista) > 0:
        todos = "sim"
        for nome, nota in lista:
            if nota < 70:
                todos = "nao"
                break
        return todos

lista = coletar_alunos()
relatorio_classificacao(lista)
print(maior_nota(lista))
print(menor_nota(lista))
print(media_geral(lista))
if todos_bom_projeto_ou_mais(lista) == "sim":
    print("Todos atingiram bom desempenho.")
else:
    print("Nem todos atingiram bom desempenho.")


