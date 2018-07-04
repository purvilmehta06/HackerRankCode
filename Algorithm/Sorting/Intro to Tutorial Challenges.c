#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,t,a[1000],d=0;
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<t;++i)
    {
        if(a[i]==n)
        {
        d=i;
        }
    }
    printf("%d",d);
}
