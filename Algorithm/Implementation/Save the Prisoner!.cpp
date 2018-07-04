#include<iostream>
using namespace std;
int main()
{
	int t;
	int n,m,s;
	int k;
	int j;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n >> m >> s;
		if(s+m<n)
        {
            cout<<s+m-1<<endl;
        }
        else{
        if((s+m-1)%n==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<(s+m-1)%n<<endl;
        }
        }
	}
}
