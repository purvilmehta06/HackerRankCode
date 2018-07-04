#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,p,d,s,i=0,g;
    cin>>p>>d>>m>>s;
    int r=0;
    while(s>0)
    {
        if(p-(d*i)>=m)
        {
        g=p-(d*i);
        }
        else
        {
        g=m;
        }
        s=s-g;
        ++i;
        if(s>=0){
        ++r;}
    }
    cout<<r;
}
