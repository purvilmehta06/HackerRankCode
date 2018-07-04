#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,q,i,j;
    long int d=0;
    char ch[1000][20],ch1[1000][20];
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%20s",ch[i]);    
    }
    scanf("%d",&q);
    for(i=0;i<q;++i)
    {
        scanf("%20s",ch1[i]);
    }
    for(i=0;i<q;++i)
    {
        for(j=0;j<n;++j)
        {
            if(strcmp(ch1[i],ch[j])==0)
            {
                ++d;
            }
        }
        printf("%ld\n",d);
        d=0;
    }
    
    return 0;
}
