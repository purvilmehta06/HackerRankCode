#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;int i = 0;
    int min_a = 100;
    int m;int factor = 0;
    int max_b = 0;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       if( a[a_i] <= min_a ) min_a = a[a_i];
        
    }
   
    
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
        if(b[b_i] > max_b) max_b = b[b_i];
    }
   
   for(int i = min_a; i <= max_b ;++i )
   {
        int sum = 0;
    for (int j = 0; j < n;j++)
        sum +=i%a[j];
   for(int k = 0; k <m ;k++)
       sum +=b[k]%i;
       if(sum == 0)
        ++factor;
   }
   
    
    cout <<factor;
    
    return 0;
}
