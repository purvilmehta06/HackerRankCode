#include <bits/stdc++.h>

using namespace std;


int main() {
    long int b,n,k,a[100000],i,j,sum=0;
    cin>>n>>k;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cin>>b;
    for(i=0;i<n;++i)
    {
        if(i!=k)
        {
            sum=sum+a[i];
        }
    }
    if(sum/2==b)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<b-(sum/2);
    }
}
