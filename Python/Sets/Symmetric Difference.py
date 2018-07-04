if __name__ == '__main__':
    n=int(input())
    s=set(map(int,input().split()))
    m=int(input())
    d=set(map(int,input().split()))
    o=s.symmetric_difference(d)
    y=d.symmetric_difference(s)
    f=list(o.union(y))
    f.sort()
    for i in range(len(f)):
        print (f[i])
