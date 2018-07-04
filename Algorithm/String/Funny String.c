#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char s[10000];
int t,i=1,j,f;
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
i=1;
j=strlen(s)-2;
f=1;
while(i<=j&&f)
{
    if(abs((s[i])-s[i-1])!=abs(s[j]-s[j+1]))
        {
        printf("Not Funny\n");
        f=0;
    }
    i++;j--;
}
if (f) printf("Funny\n");
}
return 0;
}
