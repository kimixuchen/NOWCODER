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
    int W;
    double Y, N;
    double x;
    double total;
    while(cin>>W>>Y>>x>>N)
    {
        total = 0;
        for(int i=0; i<N; ++i)
        {
            total = (W*(Y+1)*(1-x)+W*x*21);
            Y = total/W;
        }
        cout<<ceil(Y)<<endl;
        
    
    }

}
