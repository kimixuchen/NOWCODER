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

int LCS(string& s, string& rs)
{
    int n = s.length();
    
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            if(s[i-1]==rs[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            dp[i][j] = max(dp[i-1][j], dp[i][j]);
            dp[i][j] = max(dp[i][j-1], dp[i][j]);
        }
    }
    return dp[n][n];

}
int main()
{
    string s;

    while(cin>>s)
    {
        int n = s.length();
        string rs = s;
        reverse(rs.begin(), rs.end());
        int lcs = LCS(s, rs);
        
        cout<<n-lcs<<endl;
        
    
    }

    return 0;
}
