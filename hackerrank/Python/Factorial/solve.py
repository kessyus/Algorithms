def factorial(x):
    if x == 1:
        return 1
    else:
        return (x * factorial(x-1))


t = int(input())
for i in range(t):
    n = int(input())
    print(n, factorial(n))
