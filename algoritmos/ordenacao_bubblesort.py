
lista = [1,3,5,62,3,5,6]

print("Lista Originial:")
print(lista)

for i in range(0,len(lista)-1):
    for j in range(0, len(lista)-1-i):
        if (lista[j] > lista[j+1]):
            aux = lista[j]
            lista[j] = lista[j+1]
            lista[j+1] = aux

print("Lista ordenada:")
print(lista)
