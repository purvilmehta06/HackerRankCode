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


int main(){
    int n,a[1000];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;--i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
