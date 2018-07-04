#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void min(int x)
{
    switch(x)
    {
            case 1:cout<<"one";break;
            case 2:cout<<"two";break;
            case 3:cout<<"three";break;
            case 4:cout<<"four";break;
            case 5:cout<<"five";break;
            case 6:cout<<"six";break;
            case 7:cout<<"seven";break;
            case 8:cout<<"eight";break;
            case 9:cout<<"nine";break;
            case 10:cout<<"ten";break;
            case 11:cout<<"eleven";break;
            case 12:cout<<"twelve";break;
            case 13:cout<<"thirteen";break;
            case 14:cout<<"fourteen";break;
            case 16:cout<<"sixteen";break;
            case 17:cout<<"seventeen";break;
            case 18:cout<<"eighteen";break;
            case 19:cout<<"nineteen";break;
            case 20:cout<<"twenty";break;
            case 21:cout<<"twenty one";break;
            case 22:cout<<"twenty two";break;
            case 23:cout<<"twenty three";break;
            case 24:cout<<"twenty four";break;
            case 25:cout<<"twenty five";break;
            case 26:cout<<"twenty six";break;
            case 27:cout<<"twenty seven";break;
            case 28:cout<<"twenty eight";break;
            case 29:cout<<"twenty nine";break;
    }
}
void hour(int y)
{
switch(y)
    {
            case 1:cout<<"one";break;
            case 2:cout<<"two";break;
            case 3:cout<<"three";break;
            case 4:cout<<"four";break;
            case 5:cout<<"five";break;
            case 6:cout<<"six";break;
            case 7:cout<<"seven";break;
            case 8:cout<<"eight";break;
            case 9:cout<<"nine";break;
            case 10:cout<<"ten";break;
            case 11:cout<<"eleven";break;
            case 12:cout<<"twelve";break;
}
}
int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    if(m<30)
    {
        if(m!=15 && m!=0)
        {
            min(m);
            cout<<" minutes past ";
            hour(h);
        }
        if(m==15)
        {
            cout<<"quarter past ";
            hour(h);
        }
        if(m==0)
        {
            hour(h);
            cout<<" o' clock";
        }
    }
    if(m>30)
    {
        if(m!=45)
        {
            min(60-m);
            cout<<" minutes to ";
            hour(h+1);
        }
        if(m==45)
        {
            cout<<"quarter to ";
            hour(h+1);
        }
        /*if(m==0)
        {
            cout<<hour(h)<<" o'clock";
        }*/
    }
    if(m==30)
    {
        cout<<"half past ";
        hour(h);
    }
    return 0;
}
