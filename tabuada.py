def tabuada():
    log_digitados = []
    while True:
        n = int(input("Informe um número"))
        
        if n > 0 and n < 11:
            x = 1
            for x in range (1,11,1):
                print(f"{n} * {x} = {n*x}")
            log_digitados.append(n)

            continuar = input("Deseja continuar? (S/N)").upper()
            if continuar == "S":
                continue
            else:
                break

    print("Números que você digitou:")
    for i in log_digitados:
        print(i)

tabuada()

