m=int(input())
for i in range(m):
    m1=int(input())
    s=set(map(int,input().split()))
    m2=int(input())
    d=set(map(int,input().split()))
    if s.intersection(d)==s:
        print("True")
    else:
        print("False")
