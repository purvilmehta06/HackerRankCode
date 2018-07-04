#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,a[100],e=0,i,j,d=1,l,m,k,b;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    i=1;
    while(i<=n)
    {
        b=a[i];
        k=i-1;
        while(k>0)
        {
        if(b!=a[k])
        {
            goto l;
        }
        if(b==a[k])
        {
            goto m;
        }
        l:--k;
        }
        for(j=i+1;j<=n;++j)
        {
            if(b==a[j])
            {
            ++d;
            }
        }
        e=e+d/2;
        m:++i;
        d=1;
    }
    printf("%d",e);
} 

