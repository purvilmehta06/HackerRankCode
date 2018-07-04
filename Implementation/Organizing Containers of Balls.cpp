#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n,M[100][1000],t,i,j;
    cin>>t;
    for(int k=0;k<t;++k)
    {
        cin>>n;
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                cin>>M[i][j];
            }
        }
        vector<int>row(n,0);
        vector<int>column(n,0);
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            column[j]+=M[i][j];
            row[i]+=M[i][j];
        }
        }
        sort(row.begin(),row.end());
        sort(column.begin(),column.end());
        if(row==column)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
}
