#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,d,c;
    cin>>n>>d;
    //cout<<d;
    int i,j,k,l,a[10000],y=0,o=0;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<(n-d+1);++i)
    {
        o=0;
    for(j=i+1;j<n;++j)
    {
        if((a[i]+d)==a[j] || (a[i]+(2*d))==a[j])
        {
         ++o;   
        }
    }
        if(o==2)
        {
            ++y;
        }
    }
    cout<<y;
    return 0;
}
