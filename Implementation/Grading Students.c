#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,a[60],i,rem,b[60];
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
    scanf("%d\n",&a[i]);
    }
    for(i=1;i<=n;++i)
    {
        if(a[i]%5 >2 && a[i]>37)
        {
            rem=a[i]%5;
            b[i]=a[i]+(5-rem);
        }
        else
        {
            b[i]=a[i];
        }
    }
    for(i=1;i<=n;++i)
    {
        printf("%d\n",b[i]);
    }
   
    

    return 0;
}
