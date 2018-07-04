#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main() {
    int n,i;
    cin >> n;
    char s[100];
    cin >> s;
    int k;
    cin >> k;
    if(k==26)
    {
        goto l;
    }
    k=k%26;
    //cout<<k<<endl;
    for(i=0;i<strlen(s);++i)
    {
    if(s[i]>=65 && s[i]<=90)
    {
        
        if(s[i]+k>90)
        {
            s[i]=s[i]-26+k;
        }
        else
        {
            s[i]=s[i]+k;
        }
    }
    if(s[i]>=97 && s[i]<=122)
    {
        
        if((s[i]+k)>122)
        {
            s[i]=s[i]-26+k;
        }
        else
        {
            s[i]=s[i]+k;
        }
    }
        
        
    }
    l:cout<<s;
    return 0;
}
