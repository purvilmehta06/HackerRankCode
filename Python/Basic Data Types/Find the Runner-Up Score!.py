if __name__ == '__main__':
    n = int(input())
    arr = input() 
    l = list(map(int,arr.split(' ')))
    l.sort()
    find=l[n-1]
    r=l.count(find)  
    print(l[n-1-r])
    
    
