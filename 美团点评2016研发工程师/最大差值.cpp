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

class LongestDistance{
public:
    int getDis(vector<int> A, int n){
        int ret = 0;
        if(n==0)
            return ret;
        
        int curmin = A[0];
        
        for(int i=1; i<n; ++i)
        {
            ret = max(A[i]-curmin, ret);
            curmin = min(curmin, A[i]);
        }
        
        return ret;
    
    }
};
