#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int c=0,d=0,s,t,a,b,m,n,p[1000000],q[1000000],i;
    scanf("%ld %ld",&s,&t);
    scanf("%ld %ld",&a,&b);
    scanf("%ld %ld",&m,&n);
    for(i=1;i<=m;++i)
    {
        scanf("%ld",&p[i]);
    }
    for(i=1;i<=n;++i)
    {
        scanf("%ld",&q[i]);
    }
    for(i=1;i<=m;++i)
    {
        if(p[i]>=s-a && p[i]<=t-a)
            ++c;
    }
    for(i=1;i<=n;++i)
    {
        if(q[i]<=t-b && q[i]>=s-b)
            ++d;
    }
    printf("%ld\n%ld",c,d);
    return 0;
}
