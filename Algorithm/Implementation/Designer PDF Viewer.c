#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a[26],x=0,b[10]={0},i,l,max=0;
    char ch[10];
    for(i=0;i<26;++i)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%s",ch);
    //printf("%c",ch[0]);
    max=a[ch[0]-97];
    //printf("\n%d",max);
    for(i=1;i<strlen(ch);++i)
    {
        if(max<=a[ch[i]-97])
        {
            max=a[ch[i]-97];
        }      
    }
    printf("%d",max*strlen(ch));
    //printf("%d",max);
    return 0;
}
