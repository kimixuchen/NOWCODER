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

#pragma message("pragma message")
using namespace std;

const int N = 10;

int main()
{
    string s;

    while(cin>>s)
    {
        int n = s.length();
        
        int pos1=n-1;
        int pos2=n-1;
        while(pos1>=0)
        {
            if(s[pos1]>='A' && s[pos1]<='Z')
            {
                char x = s[pos1];
                for(int i=pos1; i<pos2; ++i)
                {
                    s[i] = s[i+1];
                }
                s[pos2] = x;
                --pos2;
            }
            --pos1;
        }
        cout<<s<<endl;
    
    }

    return 0;
}
