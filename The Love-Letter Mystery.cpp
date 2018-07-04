#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int mod(int x)
{
    if(x<0)
    {
        return -x;
    }
    else
        return x;
}
int main()
{
    int n,l,ans=0,j,k;
    cin>>n;
    char ch[n][10000];
    for(int i=0;i<n;++i)
    {
        cin>>ch[i];
    }
    for(int i=0;i<n;++i)
    {
        l=strlen(ch[i]);
        if(l%2!=0){
        j=l/2;k=l/2;ans=0;}
        if(l%2==0){
        j=(l/2)-1;k=l/2;ans=0;}
        while(j!=-1){
            ans=ans+mod(ch[i][j]-ch[i][k]);
        --j;++k;}
        cout<<ans<<endl;
    }
}
