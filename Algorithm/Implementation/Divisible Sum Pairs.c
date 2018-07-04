#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,k,a[100],c=0,i,j,sum;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            sum=a[i]+a[j];
            if(sum%k==0)
            {
                ++c;
            }
        }
    }
    printf("%d",c);
}
