import operator
lista = []
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lista.append((name, score))
# faz um sort em cima do score
lista = sorted(lista, key=operator.itemgetter(1, 0))

second = 0

for i, j in lista:
    if (j == lista[0][1]):
        continue
    else:
        second = j
        break

for i, j in lista:
    if (j == second):
        print(i)
