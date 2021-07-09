def solve(s):
    nova = ''
    capitalize = False
    i = True
    for c in s:
        if i and c.isalpha():
            nova += c.upper()
            i = False
            continue
        i = False

        if capitalize and c.isalpha():
            nova += c.upper()
        else:
            nova += c

        if c == ' ':
            capitalize = True
            continue
        else:
            capitalize = False

    return nova


if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)
