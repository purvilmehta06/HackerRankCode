#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    long long int q,a[1000],b[1000],j,sum;
    cin >> q;
    long long int i,n,k;
    for(j=0;j<q;++j)
    {
    cin>>n>>k;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        cin>>b[i];
    }
        sort(a,a+n);
        sort(b,b+n);
    for(i=0;i<n;++i)
    {
        sum=a[i]+b[n-i-1];
        if(sum<k){
            cout<<"NO"<<endl;goto l;}
    }
    if(i==n)
    {
        cout<<"YES"<<endl;
    }
        l:cout<<"";
    }
    return 0;
}
