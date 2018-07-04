#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100],i,j,k,c,max,u=1,b[100],o=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        u=1;
        for(j=i+1;j<n;++j)
        {
            if(a[i]==a[j] && a[j]!=0)
            {
            ++u;
            a[j]=0;
            }
        }
        if(a[i]!=0)
        {
        b[o]=u;
        ++o;
        }
    }
    //cout<<b[0]<<b[1]<<b[2];
    max=b[0];
    for(i=0;i<o;++i)
    {
        if(max<=b[i])
        {
            max=b[i];
        }
    }
    cout<<n-max;
}
