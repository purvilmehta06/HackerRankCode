#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int n,i,a[100000],c,j;
    cin>>n;
    for(i=0;i<n;++i)
    {
     cin>>a[i]; 
    }
    sort(a,a+n);
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
