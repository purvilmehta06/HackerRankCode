#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[50],d,f,i,j;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            if(i==a[j])
            {
                d=j;
            }
        }
        for(j=1;j<=n;++j)
        {
            if(d==a[j])
            {
                f=j;
            }
        }
        cout<<f<<endl;
    }
}
