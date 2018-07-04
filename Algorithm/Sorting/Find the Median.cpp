#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    long int n,c;
    cin >> n;
    long int i,j,a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];    
    }
    sort(a,a+n);
    cout<<a[n/2];
    return 0;
}
