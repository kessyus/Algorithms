if __name__ == '__main__':
    lista = []
    N = int(input())
    for _ in range(N):
        arr = list(map(str, input().split()))
        if arr[0] == 'insert':
            lista.insert(int(arr[1]), int(arr[2]))
        elif arr[0] == 'print':
            print(lista)
        elif arr[0] == 'remove':
            lista.remove(int(arr[1]))
        elif arr[0] == 'append':
            lista.append(int(arr[1]))
        elif arr[0] == 'sort':
            lista.sort()
        elif arr[0] == 'pop':
            lista.pop()
        elif arr[0] == 'reverse':
            lista.reverse()
