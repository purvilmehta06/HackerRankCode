from itertools import combinations

s, n = input().split()
s = sorted(s)

for i in range(1, int(n)+1):
    print(*(''.join(x) for x in combinations(s, i)), sep='\n')
