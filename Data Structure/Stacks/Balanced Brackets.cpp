#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n,stack[1000],top=-1,i,j;
    cin>>n;
    char ch[1000];
    for(i=0;i<n;++i)
    {
        cin>>ch;
        top=-1;
        for(j=0;j<strlen(ch);++j)
        {
        if(top==-1){++top;stack[top]=ch[j];}    
            else
            {
                if (stack[top]=='(' && ch[j]==')')
                {
                    --top;
                }
                else if (stack[top]=='[' && ch[j]==']')
                {
                    --top;
                }
                else if (stack[top]=='{' && ch[j]=='}')
                {
                    --top;
                }
                else
                {
                    ++top;
                    stack[top]=ch[j];
                }
            }
        }
        //cout<<top<<endl;
        if(top==-1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}
