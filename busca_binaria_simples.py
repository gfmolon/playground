
lista = [1, 3, 5, 7, 9, 11, 13]

x = 9   # número que quero procurar

inicio = 0
fim = len(lista) - 1

while inicio <= fim:
    i = (inicio + fim) // 2   # posição do meio
    print(f"Testando posição {i}, valor {lista[i]}")

    if lista[i] == x:
        print(f"Achei {x} na posição {i}")
        break
    elif lista[i] < x:
        inicio = i + 1
    else:
        fim = i - 1
else:
    print(f"{x} não está na lista.")
