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
	int data[1000],n,temp,i,j,k;
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
		}
		data[j+1]=temp;
	for(k=0; k<n; k++){
		printf("%d ",data[k]);}printf("\n");
    }
    return 0;
}
