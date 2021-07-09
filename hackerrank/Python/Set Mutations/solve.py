k = int(input())
a = list(map(int, input().split()))
lista = set(a)
n = 2 * int(input())
for i in range(0, n, 2):
    funcao = list(input().split())
    b = list(map(int, input().split()))
    if funcao[0] == 'intersection_update':
        lista.intersection_update(set(b))
    elif funcao[0] == 'update':
        lista.update(set(b))
    elif funcao[0] == 'symmetric_difference_update':
        lista.symmetric_difference_update(set(b))
    elif funcao[0] == 'difference_update':
        lista.difference_update(set(b))
print(sum(lista))
