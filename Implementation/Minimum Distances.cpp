#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a[1000],i,j,d[10000],k=0,min;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
          if(a[i]==a[j])
          {
              d[k]=j-i;
              ++k;
          }
        }
    }
    //cout<<d[0]<<d[1]<<k;
    if(k!=0)
    {
    min=d[0];
        //cout<<min<<endl;
    for(i=0;i<k;++i)
    {
     if(min>=d[i])
     {
         min=d[i];
     }
    }
        //cout<<min;
    }
    else{
        min=-1;
    }
    cout<<min;
    return 0;
}
