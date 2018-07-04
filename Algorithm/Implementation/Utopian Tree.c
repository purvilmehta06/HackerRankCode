#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,h=1,j;
    scanf("%d",&t);
    int *n=(int *)malloc(sizeof(int)*t);
    for(i=0;i<t;++i)
    { 
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;++i)
    {
        for(j=0;j<n[i];++j)
        {
        if(j%2==0)
        {
        h=h*2;
        }
        else
        {
        ++h;
        }
        }
    printf("%d\n",h);
        h=1;
    }
    return 0;
}
