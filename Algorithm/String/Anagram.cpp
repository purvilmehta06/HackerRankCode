#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int i,j,k,ans=0,n;
    char s1[10000];
    cin>>n;
    for(int j=0;j<n;++j)
    {
        cin>>s1;ans=0;
        int array1[26]={0};
        int array2[26]={0};
        int l=strlen(s1);
        //cout<<l<<" "<<endl;
        if(l%2!=0)
        {
            cout<<"-1"<<endl;
            goto l;
        }
        for(i=0;i<strlen(s1)/2;++i)
        {
            array1[s1[i]-97]++;
        }
        for(i=strlen(s1)/2;i<strlen(s1);++i)
        {
            array2[s1[i]-97]++;
        }
        for(i=0;i<26;++i)
        {
        if(array1[i]>array2[i])
        {
            ans=ans+array1[i]-array2[i];
        }
        else if(array1[i]<array2[i])
        {
            ans=ans+array2[i]-array1[i];
        }
        }
        cout<<ans/2<<endl;
        l:cout<<"";
    }
}
