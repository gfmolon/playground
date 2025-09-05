lista = [1,423,3,4,234,6,54653]

metade = len(lista) // 2

pivo = lista[metade]

menores = []
iguais = []
maiores = []

for i in lista:
    if i < pivo:
        menores.append(i)
    elif i == pivo:
        iguais.append(i)
    else:
        maiores.append(i)

lista_reordenada = menores+iguais+maiores

print("Lista:")
for i in lista_reordenada:
    print(i)
