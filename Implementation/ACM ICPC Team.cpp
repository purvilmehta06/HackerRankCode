#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,o=0;
    cin>>n>>m;
    int array[n*m];
    char ch[500][500];
    for(int i=0;i<n;++i)
    {
        cin>>ch[i];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            int sub=m;
            for(int k=0;k<m;++k)
            {
                if(ch[i][k]=='0' && ch[j][k]=='0')
                {
                sub=sub-1;
                }
            }
            array[o]=sub;
            ++o;
        }
    }
    sort(array,array+o);
    cout<<array[o-1]<<endl;
    int d=0;
    for(int i=0;i<o;++i)
    {
        if(array[i]==array[o-1])
        {
            ++d;
        }
    }
    cout<<d;
}
