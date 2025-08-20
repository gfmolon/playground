class Musica:
    def __init__(self, nome):
        self.nome = nome

    def retornar_musica(self):
        return self.nome

# Heranca
class Artista(Musica):
    def __init__(self, nome, nome_artista):
        super().__init__(nome)
        self.nome_artista = nome_artista
    def retornar_musica(self):
        return f"{self.nome} - {self.nome_artista}"

m1 = Musica("Qualquer Nome aqui.")
m2 = Artista("Nome da Musica", "Nome do Artista")

lista = [Musica("aa"), Artista("aa", "bb")]

#Polimorfismo
for ret in lista:
    print(ret.retornar_musica())

print(m1.retornar_musica())
print(m2.retornar_musica(), m2.nome_artista)
