
import requests
import json

def consumir_api(url):
    try:
        response = requests.get(url)
        response.raise_for_status()  # Lança uma exceção para códigos de status de erro
        dados = response.json()
        return dados
    except requests.exceptions.RequestException as e:
        print(f"Erro ao consumir a API: {e}")
        return None

# Exemplo de uso:
url_api = "https://jsonplaceholder.typicode.com/posts/" 
dados_api = consumir_api(url_api)

print("Primeiro:")
print(dados_api[0])

if len(dados_api) > 0:

    maior = dados_api[0]["id"]
    aux = dados_api[0]
    for n in range(len(dados_api) - 1):
        dados_api[n] = dados_api[n + 1]
        print(f"{n} -> id: {dados_api[n]['id']} | título: {dados_api[n]['title']}")
        if dados_api[n]["id"] > maior:
            maior = dados_api[n]["id"]
    dados_api[-1] = aux  # Coloca o primeiro no final
        
print(f"\nMaior elemento ID: {maior}")
