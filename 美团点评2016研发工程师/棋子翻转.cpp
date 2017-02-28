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

class Flip{
public:
    vector<vector<int>> flipChess(vector<vector<int>> A, vector<vector<int>> f){
        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int m, n;
        if(A.size()==0)
            return A;
        
        m = A.size();
        n = A[0].size();
        
        for(auto points : f)
        {
            int x = points[0]-1;
            int y = points[1]-1;
            for(int i=0; i<4; ++i)
            {
                int x1 = x+dirs[i][0];
                int y1 = y+dirs[i][1];
                if(x1>=0 && x1<m && y1>=0 && y1<n)
                {
                    A[x1][y1] = (A[x1][y1]+1)%2;
                }
            }
        }
        return A;
    }
};
