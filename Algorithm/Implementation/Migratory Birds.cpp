#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i,j,a[200000],b[5],c,h=0,max,d=0,min;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=1;i<=5;++i)
    {
        h=0;
        for(j=0;j<n;++j)
        {
            if(a[j]==i)
            {
            ++h;   
            }
        }
        b[i]=h;
    }
    max=b[1];
    for(i=2;i<=5;++i)
    {
        if(max<b[i])
        {
            max=b[i];
            c=i;
            
        }
    }
   
    cout<<c;
    return 0;
}

