#include <bits/stdc++.h>
#include<cmath>
using namespace std;

long strangeCounter(long t) {

    long g=3,k=0,u=3;
    while(u<t)
    {
        g=g*2;
        u=u+g;
        ++k;
    }
    long ans=u-t+1;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
