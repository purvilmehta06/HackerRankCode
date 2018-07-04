if __name__ == '__main__':
    names=[]
    scores=[]
    n=int(input())
    for _ in range(n):
        name = input()
        score = float(input())
        names.append(name)
        scores.append(score)
    
    m1,m2=float('inf'),float('inf')
    for i in range(n):
        if scores[i]<m1:
            m2=m1
            m1=scores[i]
        elif scores[i]<m2 and scores[i]>m1:
            m2=scores[i]
            
    final=[]
    for i in range(n):
        if scores[i]==m2:
            final.append(names[i])
            
    final.sort()
    for i in range(len(final)):
        print(final[i])
            
            
            
        
        
