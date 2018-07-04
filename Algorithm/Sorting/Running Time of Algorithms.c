#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#include<stdio.h>
int main()
{
	int data[1000],n,temp,i,j,h=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
		{
			data[j+1] = data[j];
			--j;
            ++h;
		}
		data[j+1]=temp;
	}
	printf("%d",h);
	/*for(i=0; i<n; i++)
		printf("%d\t",data[i]);*/
    return 0;
}
