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

class Stock {
public:
    int maxProfit(vector<int> prices, int n) {
        vector<vector<int>> dp(n+1, vector<int>(3));
        
        for(int k=1; k<=2; ++k)
        {
            int premax = dp[0][k-1]-prices[0];
            for(int i=1; i<=n; ++i)
            {
                dp[i][k] = max(dp[i-1][k], prices[i-1]+premax);
                premax = max(premax, dp[i][k-1]-prices[i-1]);
            }
        }
        return dp[n][2];
    }
};
