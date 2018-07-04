#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int p,q,i,r,a,b,d,k,o=0;
    float c=0.0;
    cin>>p>>q;
    for(i=p;i<=q;++i)
    {
      c=0;
        r=pow(i,2); 
       // cout<<r<<" ";
        k=r;
       while(r != 0)
        {
        r /= 10;
        ++c;
        }
        d=pow(10,ceil(c/2));
        //cout<<d<<" ";
        a=k/d;
        b=k%d;
        if(a+b==i  )
        {
            cout<<i<<" ";
            ++o;
        }
        /*if(c==1)
        {
            if(a+b==i)
            {
                cout<<i<<" ";++o;
            }
        }*/
            
    }
    if(o==0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
