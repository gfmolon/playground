
frase = input("Digite um frase qualquer..")

total_palavras = 0
palavras_iguais = 0
palavra_mais_longa = None
tamanho_medio_palavra = None
mais_repetida = ""
maior_repeticao = 0

print("Análise da Frase:")

frase = frase.split()
total_palavras = len(frase)

print(f"Total de Palavras: {total_palavras}")

somaletras = 0
for palavra in frase:
    somaletras += len(palavra)

tamanho_medio_palavra = somaletras / total_palavras

print(f"Tamanho Médio da Palavra (letras): {tamanho_medio_palavra:.2f}")

palavra_mais_longa = frase[0]
for palavra in frase:
    if len(palavra) > len(palavra_mais_longa):
        palavra_mais_longa = palavra

print(f"Palavra Mais Longa: {palavra_mais_longa}")

# Parte para descobrir a palavra mais repetida
for palavra in frase:
    contagem = 0
    for comparada in frase:
        if palavra == comparada:
            contagem += 1
    if contagem > maior_repeticao:
        maior_repeticao = contagem
        mais_repetida = palavra

print(f"Palavra Mais Repetida: {mais_repetida} ({maior_repeticao}x)")
