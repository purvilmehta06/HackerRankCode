#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    char s[10000];
    cin.getline(s,10000);
    int i,j,ans=1;
    for(i=0;i<26;++i)
    {
        for(j=0;j<strlen(s);++j)
        {
        if(s[j]==65+i || s[j]==97+i)
        {
            goto l;
        }
        }
        if(j==strlen(s))
        {
            cout<<"not pangram";
            goto m;
        }
        l:cout<<"";
    }
    if(i==26)
    {
        cout<<"pangram";
    }
    m:cout<<"";
    //cout<<strlen(s);
}
