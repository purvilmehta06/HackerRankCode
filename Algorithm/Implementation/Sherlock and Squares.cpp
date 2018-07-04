#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long int a,b,l,h,q,i,j;
    cin>>q;
    for(i=0;i<q;++i)
    {
    cin>>a>>b;
       l=sqrt(a);h=sqrt(b);
    if(l!=h)
        {
        if(l*l!=a)
        cout<<h-l<<endl;
        else
            cout<<h-l+1<<endl;
    }
    else
        {
        if(l*l==a)
            cout<<h-l+1<<endl;
        else
          cout<<h-l<<endl;;  
    }
}
}
