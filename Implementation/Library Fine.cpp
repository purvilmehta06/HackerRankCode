#include <bits/stdc++.h>

using namespace std;
int main() {
    int d1;
    long int fine,f;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    if(y1>y2)
    {
        cout<<"10000";
    }
    if(y1==y2 && m1>m2)
    {
        fine=(m1-m2)*500;
        /*if(d1>d2)
        {
            f=fine+((d1-d2)*15);
            cout<<f;
            goto l;
        }*/
        cout<<fine;
    }
    if(y1==y2 && m1==m2)
    {
    if(d1>d2)
    {
     
            cout<<(d1-d2)*15;
    }
    }
    if(y1<y2)
    {
        cout<<"0";
    }
    if(y1==y2 && m1<m2)
    {
        cout<<"0";
    }
    if(y1==y2 && m1==m2 && d1<=d2)
    {
        cout<<"0";
    }
    l:cout<<"";
    return 0;
}
