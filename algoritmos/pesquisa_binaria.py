def busca_binaria(lista, item):
    baixo = 0
    alto = len(lista) - 1

    while baixo <= alto:
        meio = (baixo + alto) // 2
        chute = lista[meio]

        if chute == item:
            return f"Item:{item} | Índice: {meio}"   # achou o índice
        if chute > item:
            alto = meio - 1   # descarta metade direita
        else:
            baixo = meio + 1  # descarta metade esquerda
    return None   # não encontrou


lista = [1,2,3]

print(busca_binaria(lista, 2))

