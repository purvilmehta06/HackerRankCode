#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    cout<<a+b<<endl;
    if(a>b)
    {
        cout<<a-b<<endl;
    }
    else
        cout<<b-a;
    return 0;
}
