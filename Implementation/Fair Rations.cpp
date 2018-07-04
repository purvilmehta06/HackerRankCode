#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,a[1000],i,j,k=0,o=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        if(a[i]%2!=0)
        {
            ++k;
        }
    }
    if(k%2!=0)
    {
        cout<<"NO";
    }
    else
    {
    for(i=0;i<n;++i)
    {
        if(a[i]%2!=0)
        {
            a[i]=a[i]+1;
            a[i+1]=a[i+1]+1;
            o=o+2;
        }
    }
        cout<<o;
    }
}
