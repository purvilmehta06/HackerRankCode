#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,i,j,n[10],a[10],b[10],c[1000],g=0,h,d[1000],m,e,f;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n[i]>>a[i]>>b[i];
    }
    for(i=0;i<t;++i)
    {
        g=0;
        if(a[i]>b[i])
        {
            f=a[i];
            a[i]=b[i];
            b[i]=f;
        }
        for(j=0;j<n[i];++j)
        {
            c[j]=g;
            g=g+a[i];
        }
        h=0;
        for(j=0;j<n[i];++j)
        {
            d[j]=h;
            h=h+b[i];
        }
        cout<<c[n[i]-1]<<" ";
        e=b[i]-a[i];
        m=e;
        if(e!=0)
        {
        for(j=0;j<n[i]-2;++j)
        {
            cout<<c[n[i]-1]+m<<" ";
            m=m+e;
        }
        
        cout<<d[n[i]-1];
    }
    cout<<endl;
    }
    return 0;
}
