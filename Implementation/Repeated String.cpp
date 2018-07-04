#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    long long int n;
    cin>>s;
    cin>>n;
    long long int ans=0;
    for(int i=0;i<strlen(s);++i)
    {
        if(s[i]=='a')
        {
            ++ans;
        }
    }
    long long int h=n/strlen(s);
    ans=ans*h;
    long long int t=n%strlen(s);
    for(int i=0;i<t;++i)
    {
        if(s[i]=='a')
        {
            ++ans;
        }
    }
    cout<<ans;
}
