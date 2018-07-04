#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int array1[26]={0},array2[26]={0},i,j,k,ans=0;
    char s1[10000],s2[10000];
    cin>>s1>>s2;
    for(i=0;i<strlen(s1);++i)
    {
        array1[s1[i]-97]++;
    }
    for(i=0;i<strlen(s2);++i)
    {
        array2[s2[i]-97]++;
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
    cout<<ans;
}
