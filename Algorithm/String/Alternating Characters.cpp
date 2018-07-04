#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,i,j,l=0;
    cin>>t;
    char s[t][1000000];
    for(i=0;i<t;++i)
    {
        cin>>s[i];
    }
    for(i=0;i<t;++i)
    {
        l=0;
        for(j=0;j<strlen(s[i])-1;++j)
        {
        if(s[i][j]==s[i][j+1])
        {
        ++l;    
        }
        }
        cout<<l<<endl;
    }
}
