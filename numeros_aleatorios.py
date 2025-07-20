import random

def gerar_numero():
    numero = random.randint(1,10)
    return numero

def advinhar_numero():
    while True:
        numero = int(input("Jogue um número de 1 a 10:"))
        if numero > 0 and numero <= 10:
            return numero

while True:
    jogada = input("gerar número: (s/n)").upper()

    if jogada == "S":
        numero_jg = advinhar_numero()
        numero_pc = gerar_numero()
        print(f"Sua Jogada: {numero_jg}")
        print(f"Jogada do PC: {numero_pc}")

        if numero_jg > numero_pc:
            diferenca = numero_jg - numero_pc
        else:
            diferenca = numero_pc - numero_jg

        print(f"diferença: {diferenca}")
        if diferenca == 0:
            print("BOOOOM. Acertou!")
    
    else:
        print("programa encerrado.")
        break

