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

class MaxInnerRec{
public:
    int countArea(vector<int> A, int n)
    {
        int ret = 0;
        stack<pair<int, int>> s;
        for(int i=0; i<n; ++i)
        {
            int w = 0;
            while(!s.empty())
            {
                if(A[i]>=s.top().first)
                {
                    break;
                }
                auto r = s.top();
                s.pop();
                w += r.second;
                ret = max(r.first*w, ret);
            }
            s.push(make_pair(A[i], w+1));
        }
        int w = 0;
        while(!s.empty())
        {
            auto r = s.top();
            s.pop();
            w += r.second;
            ret = max(r.first*w, ret);
        }
        return ret;
    
    }

};
