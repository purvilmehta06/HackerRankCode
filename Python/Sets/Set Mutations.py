n=int(input())
s=set(map(int,input().split()))
m=int(input())
for i in range(m):
    ch,n=input().split()
    d=set(map(int,input().split()))
    if ch=="intersection_update":
        s.intersection_update(d)
    elif ch=="update":
        s.update(d)
    elif ch=="symmetric_difference_update":
        s.symmetric_difference_update(d)
    elif ch=="difference_update":
        s.difference_update(d)
          
print(sum(s))


        
