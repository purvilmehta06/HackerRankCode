#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a[1000],i,l[1000],m[1000],r[1000],h=0,f=1,t=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    m[0]=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]<m[0])
        {
            l[h]=a[i];
            ++h;
        }
        if(a[i]==m[0])
        {
        m[f]=a[i];
            ++f;
        }
        if(a[i]>m[0])
        {
            r[t]=a[i];
            ++t;
        }
    }
    for(i=0;i<h;++i)
        printf("%d ",l[i]);
    for(i=0;i<f;++i)
    {
        printf("%d ",m[i]);
    }
    for(i=0;i<t;++i)
    {
        printf("%d ",r[i]);
    }
    return 0;
}
