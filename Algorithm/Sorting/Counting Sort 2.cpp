#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
   long long int n,a[100000],i,j,c;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
}
