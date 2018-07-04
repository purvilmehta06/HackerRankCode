#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    long int n,i,a[100000],j,o=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    //int o=0;
    for(j=0;j<n;++j)
    {
        if(a[j]!=-1){
    for(i=j+1;i<n;++i)
    {
        if(a[j]<=a[i] && a[i]<=(a[j]+4))
        {
            a[i]=-1;
        }
    }
    }
    }
    //long int o=0;
    for(i=0;i<n;++i)
    {
        if(a[i]!=-1)
        {
            ++o;
        }
    }
    cout<<o;
}
