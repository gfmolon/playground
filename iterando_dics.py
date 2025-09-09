dicionario = {"chave":"valor", "chave2": "valor2"}

print("ITEMS():")
for chave, valor in dicionario.items():
    print(chave)
    print(valor)

print("KEYS()")
for i in dicionario.keys():
    print(i)

print("VALUES():")
for i in dicionario.values():
    print(i)

"""
d.keys() → pega só as chaves

d.values() → pega só os valores

d.items() → pega (chave, valor) ao mesmo tempo
"""

