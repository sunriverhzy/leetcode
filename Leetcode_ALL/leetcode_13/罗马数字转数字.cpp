#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int romanToInt(string s)
{
    int res = 0;
    unordered_map<char, int> m{{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = 0; i < s.size(); i ++)
    {
        int val = m[s[i]];
        if( i == s.size() - 1 || m[s[i + 1]] <= m[s[i]]) res += val;
        else res -= val;
    }

    return r
}

int main()
{

}