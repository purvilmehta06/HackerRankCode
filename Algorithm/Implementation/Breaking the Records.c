#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    long int f=0,s[1000],c,n,i,g=0,d;
    scanf("%ld",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%ld",&s[i]);
    }
    c=s[1];
    d=s[1];
    for(i=1;i<=n;++i)
    {
        if(s[i]<c)
        {
         c=s[i];
         ++f;   
        }
    }
    for(i=1;i<=n;++i)
    {
        if(s[i]>d)
        {
        d=s[i];
        ++g;
        }
    }
    printf("%ld %ld",g,f);
    return 0;
}
