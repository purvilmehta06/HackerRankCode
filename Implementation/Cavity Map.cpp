#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    char a[100][1000];
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;++i)
    {
        for(j=1;j<n-1;++j)
        {
            if( (a[i][j] > a[i-1][j]) && (a[i][j] > a[i][j+1])      
         && (a[i][j] > a[i+1][j]) && (a[i][j] > a[i][j-1]) )
            {
                a[i][j]='X';
            }
        }
        //cout<<s[i]<<endl;
    }
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<endl;
    }
}
