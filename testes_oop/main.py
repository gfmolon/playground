from metodos_e_classes import Pessoa, Gerente, Funcionario, Departamento

dep1 = Departamento("Marketing")
p1 = Gerente("Joao Silva", 20)
p2 = Funcionario("Cesar Almeida", 19, "Técnico em manutenção")

print(p1.get_senha)
p1.get_senha = 12345
print(p1.get_senha)

dep1.adicionar_pessoa(p1)
dep1.adicionar_pessoa(p2)

for i in dep1.lista_pessoas:
    print(i.apresentacao())

