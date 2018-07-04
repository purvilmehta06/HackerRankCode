#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a[1000][1000],n,i,j,sum,c=0,d=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;++i)
    {
        for(j=i;j<=i;++j)
        {
            c=c+a[i][j];
        }
    }
    k=n;
    for(i=1;i<=n;++i)
    {
        for(j=k;j>=k;--j)
        {
        d=d+a[i][j];    
        }
        --k;
    }
    if(c>d)
    {
    sum=c-d;
    }
    if(c<=d)
    {
    sum=d-c;
    }
    printf("%d",sum);
    return 0;
}
