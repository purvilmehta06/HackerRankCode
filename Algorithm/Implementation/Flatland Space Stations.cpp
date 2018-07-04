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
int main()
    {
        long cities, spaceStations;
        cin>>cities >>spaceStations;
        long cwss[spaceStations];  //cities with space stations
    
        for(long i=0; i<spaceStations; i++)  //takes the values of spaceStation cities
            {
                cin>>cwss[i];
            }
    
        /*processing the citites*/
        long max=0;
        for(long i=0; i<cities; i++)
            {
                long temp=2147483647;
                for(long j=0; j<spaceStations; j++)
                    {
                        if( abs(i-cwss[j])<temp )
                            {temp=abs(i-cwss[j]);}
                    }
                if(temp>max)
                    {max=temp;}
            }   
       
        cout<<max;
       
    }
