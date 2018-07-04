#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n, k;
cin >> n >> k;
int a[n];
for (int i=0;i<n;i++) cin >> a[i];

sort(a,a+n);    
int min=a[n-1]-a[0];
for (int i=0;i<n-k+1;i++) {
    if ((a[i+k-1]-a[i])<min) min=a[i+k-1]-a[i];
}    

cout << min;
}
