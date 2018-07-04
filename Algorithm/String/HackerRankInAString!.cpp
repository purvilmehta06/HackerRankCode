#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,i,j=0,k=0;
    cin >> q;
    char s[100][10000];
    char ch[20]={"hackerrank"};
    for(i=0;i<q;++i)
    {
    cin>>s[i];    
    }
    
    for(i=0;i<q;++i)
    {
      k=0;
        for(j=0;j<strlen(s[i]);++j)
      {
        if(s[i][j]==ch[k]) 
      {
          ++k;
      }
    }
    
    if(k==10)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    }
