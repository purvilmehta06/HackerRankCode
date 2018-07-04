#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,d=100,n,k,c[25];  
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&c[i]);
    }
    for(int i=k;i<n;i=i+k)
    {
    if(c[i]==0)
    {
    --d;    
    }
    else
    {
    d=d-3;    
    }        
    }
    if(c[0]==0)
    {
    --d;
    }
    else
    {
    d=d-3;
    }
    
    printf("%d",d);
    return 0;
}
