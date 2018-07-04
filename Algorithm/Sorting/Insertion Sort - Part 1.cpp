#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,d;
    cin >> n;
    int i,a[1000],j;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    d=a[n-1];
    for(i=n-2;i>=0;--i)
    {
        if(i==0)
        {
            a[i+1]=a[i];
            for(j=0;j<n;++j)
    {
        cout<<a[j]<<" ";
    }
            cout<<endl;
            a[i]=d;
            goto l;
        }
        if(a[i]>=d)
        {
            a[i+1]=a[i];
            
        }
        else
        {
            a[i+1]=d;
            goto l;
        }
        for(j=0;j<n;++j)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    l:
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
