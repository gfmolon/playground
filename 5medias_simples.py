medias = []
total = 1

while total <= 5:
    media = float(input(f"Informe a nota {total}"))
    if media >= 0 and media <= 10:
        medias.append(media)
        total += 1
       

soma_medias = 0
for media in medias:
    soma_medias += media
calculo_media = soma_medias / 5

print(f"Médias Contabilizadas: {len(medias)}")
print(f"Média Geral: {calculo_media:.2f}")

for media in medias:
    print(f"{media:.2f}")
