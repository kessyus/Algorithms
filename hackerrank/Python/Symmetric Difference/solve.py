# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
lista1 = list(map(int, input().split()))
m = int(input())
lista2 = list(map(int, input().split()))

lista1 = set(lista1)
lista2 = set(lista2)

lista3 = sorted(lista1.symmetric_difference(lista2))

for i in list(lista3):
    print(i, sep="\n")
