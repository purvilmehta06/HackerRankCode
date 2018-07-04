#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100],i,j,k,h=0,t=0,b[100],max;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=1;i<n;++i)
    {
        h=0;
        for(j=0;j<n;++j)
        {
            
            if(a[j]==i || a[j]==i+1)
            {
             ++h;   
            }
        }
        b[t]=h;
        ++t;
    }
    
    max=b[0];
    for(i=0;i<t;++i)
    {
    if(max<=b[i])
    {
        max=b[i];
    }
    }
    cout<<max;
    return 0;
}
