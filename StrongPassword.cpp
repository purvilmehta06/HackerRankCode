#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,num=0,upper=0,lower=0,spec=0;
    cin>>n;
    char s[100];
    int o=0,l;
    cin>>s;
    l=strlen(s);
    for(int i=0;i<strlen(s);++i)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            ++num;
        }
        if(s[i]>=97 && s[i]<=122)
        {
            ++lower;
        }
        if(s[i]>=65 && s[i]<=90)
        {
            ++upper;
        }
        if(s[i]=='!' || s[i]=='@' || s[i]=='#'||s[i]=='$' || s[i]=='%' || s[i]=='^'||s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')'||s[i]=='-' || s[i]=='+')
        {
            ++spec;
        }
    }
    if(num==0)
    {
        l=l+1;
        ++o;
    }
    if(spec==0)
    {
        l=l+1;
        ++o;
    }
    if(upper==0)
    {
        l=l+1;
        ++o;
    }
    if(lower==0)
    {
        l=l+1;
        ++o;
    }
    if(l<6)
    {
        o=o+(6-l);
    }
    cout<<o;
}
