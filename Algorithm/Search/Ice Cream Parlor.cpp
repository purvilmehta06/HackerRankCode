#include <bits/stdc++.h>

using namespace std;


int main() {
    int t,a[50][10000],m[10000],n[10000],i,j,k,sum;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>m[i]>>n[i];
        for(j=0;j<n[i];++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<t;++i)
    {
        for(j=0;j<n[i];++j)
        {
            for(k=j+1;k<n[i];++k)
            {
            sum=a[i][j]+a[i][k];
                if(sum==m[i])
                {
                    cout<<j+1<<" "<<k+1<<endl;
                }
            }
        }
    }
    return 0;
}
