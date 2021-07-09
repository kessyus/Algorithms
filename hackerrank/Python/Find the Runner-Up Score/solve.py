if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
arr.sort(reverse=True)
c = arr[0]
for i in arr:
    if (c > i):
        c = i
        break
print(c)