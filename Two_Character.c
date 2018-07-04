#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    char s[100];
    int i,j,l;
    gets(s);
    i=0;
    l=strlen(s);
    while(i<l)
    {
        
            if(s[i]==s[i+1])
            {
            for(j=i;j<l;++j)
            {
                s[j]=s[j+2];
            }
                s[l-1]='\0';
                s[l-2]='\0';
                i=-1;
                l=strlen(s);
            }
        ++i;
    }
    if(s[0]=='\0')
    {
    printf("Empty String");
    }
    else
    {
        printf("%s",s);
    }
}
