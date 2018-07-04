#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a[4],max,i;
    for(i=0;i<4;++i)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<4;++i)
    {
     if(max<=a[i])
     {
         max=a[i];
     }
    }
    printf("%d",max);
}

