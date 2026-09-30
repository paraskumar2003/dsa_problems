#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string &s)
{

    unordered_map<char, int> map;

    int left = 0;
    int right = 0;
    int maxLength = 0;

    while (right < s.size())
    {

        if (map.find(s[right]) != map.end())
        {
            left = max(left, map[s[right]] + 1);
        }

        map[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
        right++;
        continue;
    }

    return maxLength;
}

int main()
{

    string s = "tmmzuxt";

    cout << lengthOfLongestSubstring(s);
}