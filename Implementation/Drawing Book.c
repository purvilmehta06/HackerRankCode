#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    long int n,p,k=1,m=0,g,f=0;
    scanf("%ld %ld",&n,&p);
    while(k<p)
    {
        k=k+2;
        ++m;
    }
    g=n;
    while(g>p)
    {
        g=g-2;
        ++f;
    }
    if(n%2!=0 && f!=0 && p%2==0)
    {
        f=f-1;
    }
    if(m>=f)
    {
        printf("%ld",f);
    }
    else
    {
        printf("%ld",m);
    }
}
