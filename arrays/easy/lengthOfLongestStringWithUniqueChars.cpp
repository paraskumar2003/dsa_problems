#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string &s)
{

    unordered_set<char> seen;

    int left = 0;
    int right = 0;
    int maxLength = 0;

    while (right < s.size())
    {

        if (seen.find(s[right]) != seen.end())
        {
            seen.erase(s[left]);
            left++;
            continue;

        }
        else
        {
            seen.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
    }

    return maxLength;
}

int main(){

    string s = "abcabcbbcadfdafkadspfodaspovjfadspofjapdsofjads";

    cout << lengthOfLongestSubstring(s);

}