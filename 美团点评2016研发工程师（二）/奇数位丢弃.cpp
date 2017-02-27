#include <iostream>
#include <sstream>
#include <cfloat>
#include <cctype>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <limits.h>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <bitset>
#include <cstdlib>

using namespace std;

const int N = 10;


int main()
{
    int n;
    int nums[11] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        
        int pos;
        for(pos=0; pos<11; ++pos)
        {
            if(nums[pos]>n)
                break;
        }
        cout<<nums[pos-1]-1<<endl;
        
    }

    return 0;
}

