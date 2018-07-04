#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int t,i,l,d=0;
    long int a[15],ans;
    scanf("%ld",&t);
    for(i=0;i<t;++i)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<t;++i)
    {
        ans=a[i];
        while(ans>0)
        {
            l=ans%10;
            if(l!=0 && a[i]%l==0)
            {
            ++d;
            }
            ans=ans/10;
        }
        printf("%ld\n",d);
        d=0;
    }
}
