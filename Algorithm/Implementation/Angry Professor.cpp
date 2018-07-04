#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n[10],k[10],a[10][1000],i,j,g=0;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n[i]>>k[i];
        for(j=0;j<n[i];++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<t;++i)
    {
        g=0;
        for(j=0;j<n[i];++j)
        {
            if(a[i][j]<=0)
            {
                ++g;
            }
        }
        if(g<k[i])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
