#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{    
    int i,j,l=0,k,sum=0,a[6][6],b[16],max;
    for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<6;++i)
    {
        for(j=0;j<4;++j)
        {
            for(k=j;k<j+3;++k)
            {
            sum=sum+a[i][k];
            }
            sum=sum+a[i+1][k-2];
            for(k=j;k<j+3;++k)
            {
                sum=sum+a[i+2][k];
            }
        
        b[l]=sum;
        ++l;
        sum=0;
        }
    }
    max=b[0];
    for(i=0;i<16;++i)
    {
        if(max<=b[i])
        {
            max=b[i];
        }
    }
    printf("%d",max);
    return 0;
}
