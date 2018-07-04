#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long n,k,a,aa=0;
    scanf("%ld",&n);
    scanf("%ld",&k);
    long luck[n],imp[n];
    for(long i=0;i<n;i++)
    {
        scanf("%ld%ld",&luck[i],&imp[i]);
        
    }
     long c=0;
     for (long i = 0; i < n; ++i)
    {
        for (long j = i + 1; j < n; ++j)
        {
            if (luck[i] > luck[j])
            {
                a =  luck[i];
                luck[i] = luck[j];
                luck[j] = a;
                a=imp[i];
                imp[i]=imp[j];
                imp[j]=a;
            }
        }
    }//sorting
   
    for(long i=n-1;i>=0;i--)
    {
       
        if((c<=k)&&(imp[i]==1))
        {
        if(c!=k)
            aa+=luck[i];
            c++;
        }
       if(imp[i]==0)
           aa+=luck[i];
        if((c>k)&&(imp[i]==1))
            aa=aa-luck[i];
      // printf("%ld %ld %ld %ld %ld\n",luck[i],imp[i],aa,c,k);  
    }
    printf("%ld\n",aa);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
