#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int n,a[100000],sum=0,i;
    scanf("%ld",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
}
