#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int queue[100000],rear=-1,front=-1;
void enqueue(long long int x)
{
if(rear==-1 && front==-1)
{
rear=front=0;    
}
    else
    {
        ++rear;
    }
    queue[rear]=x;
}
void dequeue()
{
    ++front;
    if(front>rear)
    {
        front=rear=-1;
    }
}
void display()
{
    
        cout<<queue[front]<<endl;
    
}
int main() {
    long long int q,a;
    cin>>q;
    
    for(int i=0;i<q;++i)
    {
        int o;
        cin>>o;
        switch(o)
        {
            case 1:cin>>a;
                   enqueue(a);
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
        }
    }
}
