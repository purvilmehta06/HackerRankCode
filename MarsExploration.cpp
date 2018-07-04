#include <bits/stdc++.h>
#include<string.h>
using namespace std;


int main() {
    int i,ans=0,l;
    char s[100],ch[100]={0};
    cin >> s;
    l=strlen(s);
    for(i=0;i<l/3;++i)
    {
        strcat(ch,"SOS");
    }
    //cout<<ch<<endl;
    for(i=0;i<l;++i)
    {
    if(s[i]!=ch[i])
    {
        ++ans;
    }
    }
    cout<<ans;
    return 0;
}
