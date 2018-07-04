#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long long int n,a[200000],min=999999999,sum,c;
    cin>>n;
    int i,j,k;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n;++i)
    {
        sum=a[i]-a[i-1];
        if(sum<min)
        {
            min=sum;
        }
    }
    cout<<min;
}
