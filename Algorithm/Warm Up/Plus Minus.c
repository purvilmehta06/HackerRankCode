#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,n,a[100000];
    float p,q,r,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;++i)
    {
        if(a[i]>0)
        {
            ++c;
        }
        if(a[i]<0)
        {
            ++d;
        }
        if(a[i]==0)
        {
            ++e;
        }
    }
    p=c/n;
    q=d/n;
    r=e/n;
    printf("%f\n%f\n%f",p,q,r);
}
