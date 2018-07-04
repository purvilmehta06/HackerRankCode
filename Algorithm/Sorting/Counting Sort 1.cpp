#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i,n,a[1000000],j,h=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<100;++i)
    {
        for(j=0;j<n;++j)
        {
            if(i==a[j])
            {
             ++h;   
            }
        }
        cout<<h<<" ";
        h=0;
    }
}
