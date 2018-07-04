#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    char s[100000];
    cin >> s;
    int ans=1,i;
    for(i=0;i<strlen(s);++i)
    {
    if(s[i]>=65 && s[i]<=90)
    {
        ++ans;
    }
    }
    cout<<ans;
    return 0;
}
