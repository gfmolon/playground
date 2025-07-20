import  tkinter  as tk

# Criar a Janela Principal
janela = tk.Tk()
janela.title("Titulo da Janela")
janela.geometry("300x200")

# Criar um texto na Janela
label = tk.Label(janela, text="Olá, mundo!", font=("Arial", 14))
label.pack(pady=20)

# Criar Botão
def clicou():
    label.config(text="Você clicou!")

botao = tk.Button(janela, text="Clique aqui", command=clicou)
botao.pack()

#Rodar a Janela
janela.mainloop()
