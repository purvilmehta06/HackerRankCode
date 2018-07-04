#include <sstream>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[1000000];
    cin>>s;
    long long int l=strlen(s);
    for(int i=0;i<l;++i)
    {
    if(s[i]!=',')
    {
        cout<<s[i];
    }
        else
        {
            cout<<endl;
        }
    }
}
