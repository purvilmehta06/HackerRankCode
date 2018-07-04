#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
using namespace std;


int main() {
    char s[1000];
    int l,col,row,i,j,sum;
    float d;
    cin >> s;
    l=strlen(s);
    d=sqrt(l);
    row=floor(d);
    col=ceil(d);
    while(row*col<l)
    {
        row=row+1;
    }
    //cout<<s[0];
    //cout<<row<<col;
    for(i=0;i<col;++i)
    {
        sum=i;
        for(j=0;j<row;++j){
        cout<<s[sum];        
        sum=sum+col;
        if(sum>=l)
        {
            goto h;
        }
        }
        h:cout<<" ";
    }
    return 0;
}
