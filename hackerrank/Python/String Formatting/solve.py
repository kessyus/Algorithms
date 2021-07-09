def print_formatted(number):
    # your code goes here
    largura = int(len(bin(int(number))) - 2)
    for i in range(1, number+1):
        # print(format(i, '>5d'), format(i, '>5o'), format(
        # i, '>5X'), format(i, '^b'), sep=" ")
        print('{0:>{width}d} {0:>{width}o} {0:>{width}X} {0:>{width}b}'.format(
            i, width=largura))


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
