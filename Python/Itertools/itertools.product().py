from itertools import product
l=list(map(int,input().split()))
m=list(map(int,input().split()))
print(*product(l,m))
