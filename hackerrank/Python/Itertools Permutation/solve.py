from itertools import permutations
s, n = input().split()
n = int(n)
results = permutations(sorted(s), n)
print(''.join(str(results) for i in l)
