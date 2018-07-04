#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
    int n;
    long int sum=0;
    cin >> n;
    int i,j,a[40],c;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    
    for(i=0;i<n;++i)
    {
    sum=sum+(a[i]*pow(2,i));    
    }
    cout<<sum;
    return 0;
}
