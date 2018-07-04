#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char s[30];
    int i;
    gets(s);
    
    if(s[8]=='P')
    {
        if(s[1]<'8' && s[0]=='0')
        {
            s[0]='1';
            s[1]=2+s[1];
            goto l;
        }
        if(s[1]=='8' && s[0]=='0')
        {
            s[0]='2';
            s[1]='0';
            goto l;
        }
        if(s[1]=='9' && s[0]=='0')
        {
            s[0]='2';
            s[1]='1';
            goto l;
        }
        if(s[0]=='1' && s[1]=='0')
        {
            s[0]='2';
            s[1]='2';
            goto l;
        }
        if(s[0]=='1' && s[1]=='1')
        {
            s[0]='2';
            s[1]='3';
            goto l;
        }
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='1';
            s[1]='2';
            goto l;
        }
        l:
        for(i=0;i<8;++i)
        {
            printf("%c",s[i]);
        }
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
           s[0]='0';
            s[1]='0';
        }
      for(i=0;i<8;++i)
        {
            printf("%c",s[i]);
        }  
    }
    return 0;
}
