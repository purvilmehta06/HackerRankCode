#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,x[100],y[100],z[100],i,d1,d2,d3;
    cin>>q;
    for(i=0;i<q;++i)
    {
     cin>>x[i]>>y[i]>>z[i];   
    }
    for(i=0;i<q;++i)
    {
     d1=z[i]-x[i];
     d2=z[i]-y[i];
     if(d1<0)
     {
         d1=-d1;
     }
     if(d2<0)
     {
         d2=-d2;
     }
        if(d1==d2)
        {
            cout<<"Mouse C"<<endl;
        }
        if(d1<d2)
        {
            cout<<"Cat A"<<endl;
        }
        if(d2<d1)
        {
            cout<<"Cat B"<<endl;
        }
    }
    return 0;
}
