#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,a[100],i,h=0,d,u=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }//cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4];
    d=0;
    i=0;
    while(d!=(n-1))
    {
        if(d==(n-2) && a[n-2]==0)
        {
            ++h;
            ++u;
            goto l;
        }
        if(a[d+1]==0 && a[d+2]==1)
        {
            ++h;
            ++u;
            goto l;
        }
        if(a[d+2]==0 && a[d+1]==0)
        {
            h=h+2;
            ++u;
            goto l;
        }
        if(a[d+1]==1 && a[d+2]==0)
        {
            h=h+2;
            ++u;
            goto l;
        }
        l:d=h;
        //cout<<d<<endl;
        ++i;
    }
    cout<<u;
}
