#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,a[1000],i,j,c,d=0,ans,g,b[1000],min,e=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    
    printf("%d\n",n);
    d=0;
    while(a[n-1]!=0)
    {
        min=a[d];
        /*for(i=d;i<n;++i)
        {
        if(min>=a[i])
        {
            min=a[i];
        }
        }*/
        
        for(i=d;i<n;++i)
        {
            a[i]=a[i]-min;
               
        }
        for(i=0;i<n;++i)
        {
            if(a[i]==0){
                ++e;} 
        }
        ans=n-e;
        if(ans!=0)
        {
        printf("%d\n",ans);
        }
        d=e;
        e=0;
        
    }
    return 0;
} 
