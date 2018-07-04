#include <bits/stdc++.h>

using namespace std;


int main() 
{
    long long int n,c,j;
    cin >> n;
    long long int i,a[50];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=2;--i)
    {
        if(a[i-1]+a[i-2]>a[i])
        {
            cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i];goto l;
        }
    }
    if(i==1)
    {
        cout<<"-1";
    }
    l:cout<<"";
    return 0;
}
