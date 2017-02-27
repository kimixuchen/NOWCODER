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

class Printer {
public:
    vector<int> arrayPrint(vector<vector<int> > arr, int n) {
        vector<int> ret;
        
        for(int j=n-1; j>=0; --j)
        {
            for(int i=0; j+i<n; ++i)
            {
                ret.push_back(arr[i][j+i]);
            }
        }
        
        for(int i=1; i<n; ++i)
        {
            for(int j=0; i+j<n; ++j)
            {
                ret.push_back(arr[i+j][j]);
            }
        }
        
        return ret;
    }
};
