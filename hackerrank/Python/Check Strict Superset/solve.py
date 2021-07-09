lista_a = set(map(int, input().split()))
n = int(input())
resposta = False
for i in range(n):
    lista_b = set(map(int, input().split()))
    if lista_a.issuperset(lista_b):
        resposta = True
    else:
        resposta = False
print(resposta)
