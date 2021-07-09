# def swap_case(s):
#     if s.islower():
#         return s.upper()
#     else:
#         return s.lower()

# if __name__ == '__main__':
#     texto = str(input())
#     for c in texto:
#         print(swap_case(c), end='')

def swap_case(s):
    texto = ""
    for c in s:
        if c.islower():
            texto += c.upper()
        else:
            texto += c.lower()
    return texto

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)