#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long unsigned int n,k,a[1000000],c,sum=0;
    cin>>n>>k;
    long long int i,j,l;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;++i)
    {
    sum=sum+a[i];
        if(sum>k)
        {
            cout<<i;
            goto l;
        }
    }
    l:
    
    return 0;
}
