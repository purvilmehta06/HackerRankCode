#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,a[100],d,m,i,g=0,sum=0,k,j;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cin>>d>>k;
    if(n==1 && k==1)
    {
        if(a[0]==d)
            cout<<"1";
            goto l;
    }
    for(i=0;i<n-1;++i)
    {
        sum=0;
        for(j=i;j<i+k;++j)
        {
            sum=sum+a[j];
        }
        if(sum==d)
        {
            ++g;
        }
    }
    cout<<g;
    l:cout<<"";
    return 0;
}
