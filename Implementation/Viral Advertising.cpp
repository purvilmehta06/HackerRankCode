#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long int l=0,m,n,i,d=5;
    cin>>n;
    for(i=0;i<n;++i)
    {
        m=floor(d/2);
        l=l+m;
        d=m*3;
                
    }
    cout<<l;
    return 0;
}
