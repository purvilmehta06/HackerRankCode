#include <bits/stdc++.h>

using namespace std;
int rev(int x)
{
    int w,total=0;
    int o=0;
    while(x>0)
    {
        w=x%10;
        total=(total*10)+w;
        x=x/10;
        ++o;
    }
    return total;
}

int main() {
    
    int k,h=0,i,j,l;
    cin >> i >> j >> k;
    for(l=i;l<=j;++l)
    {
        if((l-rev(l))%k==0)
        {
            ++h;
        }
    }
    cout<<h;
    return 0;
}
