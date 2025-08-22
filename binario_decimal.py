#Binário
numero = int(input("Informe o número decimal:"))

d6 = numero % 10
d5 = (numero // 10) % 10
d4 = (numero // 100) % 10
d3 = (numero // 1000) % 10
d2 = (numero // 10000) % 10
d1 = (numero // 100000) % 10

numero_decimal = d6*1 + d5*2 + d4*4 + d3*8 + d2*16 + d1* 32

print(f"Número binário: {numero}")
print(f"Número decimal: {numero_decimal}")


