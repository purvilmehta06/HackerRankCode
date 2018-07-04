#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int a[100],b[100],i,c=0,d=0;
    for(i=1;i<=3;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=3;++i)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=3;++i)
    {
        if(a[i]>b[i])
        {
            ++c;
        }
        if(b[i]>a[i])
        {
            ++d;
        }
    }
    printf("%d %d",c,d);
}

