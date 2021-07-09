import sys

if __name__ == '__main__':
    n = int(input())

    for i in range(n):
        # sys.stdout.write(str(i+1))
        # melhor maneira é abaixo:
        print(i+1, end='')
