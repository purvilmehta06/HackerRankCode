#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    long int a[1000000],b[1000000],i,x1,x2,v1,v2,l,m;
    scanf("%ld %ld %ld %ld",&x1,&v1,&x2,&v2);
    for(i=2;i<=10000;++i)
    {
        x1=x1+v1;
        a[i]=x1;
    }
    for(i=2;i<=10000;++i)
    {
        x2=x2+v2;
        b[i]=x2;
    }
    i=2;
    while(i<10001)
    {
        if(a[i]==b[i])
        {
            goto l;
        }
        if(i>9999)
        {
            printf("NO");
            goto m;
        }
    ++i;
    }
    l:printf("YES");
    m:
    return 0;
}
