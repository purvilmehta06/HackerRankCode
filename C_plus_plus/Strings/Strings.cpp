#include <iostream>
#include <string>
using namespace std;

int main() {
    char s1[10000],s2[10000],ch;
    int len1=0,len2=0,i;
    cin>>s1;
    cin>>s2;
    for(i=0;s1[i]!=NULL;++i)
    {
        ++len1;
    }
    for(i=0;s2[i]!=NULL;++i)
    {
        ++len2;
    }
    //len1=strlen(s1);
    //len2=strlen(s2);
    cout<<len1<<" "<<len2<<endl;
    cout<<s1<<s2<<endl;
    ch=s1[0];
    s1[0]=s2[0];
    s2[0]=ch;
    cout<<s1<<" "<<s2;
    return 0;
}
