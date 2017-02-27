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
    string s;
    while(cin>>s)
    {
        int ret = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        unordered_map<char, int> chars;
        for(char c : s)
        {
            chars[c]++;
        }
        
        for(auto it = chars.begin(); it!=chars.end(); ++it)
        {
            q.push(it->second);
        }
        
        while(!q.empty())
        {
            int a = q.top();
            q.pop();
            if(q.empty())
            {
                break;
            }
            int b = q.top();
            q.pop();
            ret += a+b;
            q.push(a+b);
        }
        
        cout<<ret<<endl;
    }

    return 0;
}

