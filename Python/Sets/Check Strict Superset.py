s=set(map(int,input().split()))
n=int(input())
l=[]
for i in range(n):
    d=set(map(int,input().split()))
    if d.intersection(s)==d and d.intersection(s)!=s:
        l.append(1)
    else:
        l.append(0)
        
if len(set(l))==1:
    print("True")
else:
    print("False")
