if __name__ == '__main__':
    N = int(input())
    a=[]
    for i in range(N):
        x = input().split(" ")
        string = x[0]
        if string=='insert':
            a.insert(int(x[1]),int(x[2]))
        elif string=='print':
            print(a)
        elif string=='remove':
            a.remove(int(x[1]))
        elif string=='append':
            a.append(int(x[1]))
        elif string=='pop':
            a.pop()
            #print(a)
        elif string=='sort':
            a=sorted(a)
        elif string=='reverse':
            a=a[::-1]
            
            
            
