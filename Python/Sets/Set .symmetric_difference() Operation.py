n=int(input())
s=set(map(int,input().split()))
m=int(input())
d=set(map(int,input().split()))
print(len(s.symmetric_difference(d)))
