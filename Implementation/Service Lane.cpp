#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long int n,t,a[100000],en[1000],ex[1000],min,i,j;
    cin>>n>>t;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<t;++i)
    {
        cin>>en[i]>>ex[i];
    }
    for(i=0;i<t;++i)
    {
        min=999999;
        for(j=en[i];j<=ex[i];++j)
        {
           if(min>=a[j])
           {
              min=a[j]; 
           }
        }
        cout<<min<<endl;
    }
    return 0;
}
