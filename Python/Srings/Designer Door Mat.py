if __name__ == '__main__':
    w,l = input().split()

    w = int(w)
    l = int(l)
    o=w//2
    for m in range(o):
        print((((m*2)+1)*'.|.').center(l,"-"))
    print("WELCOME".center(l,"-"))
    j=w//2-1
    for m in range(o):
        print((((j*2)+1)*'.|.').center(l,"-"))
        j=j-1
    
    
