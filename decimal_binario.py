n = int(input("informe o numero decimal"))

d6 = n % 2;
d5 = (n // 2) % 2 
d4 = (n // 4) % 2
d3 = (n // 8) % 2
d2 = (n // 16) % 2
d1 = (n // 32) % 2


print(f"{d1} {d2} {d3} {d4} {d5} {d6}")
