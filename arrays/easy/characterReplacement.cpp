#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <algorithm>

using namespace std;

int characterReplacement(string &s, int k)
{

    int left = 0;

    int maxFrequency = 0;
    int maxLength = 0;
    unordered_map<char, int> map;

    for (int right = 0; right < s.size(); right++)
    {

        map[s[right]]++;

        maxFrequency = max(maxFrequency, map[s[right]]);

        while ((right - left + 1) - maxFrequency > k)
        {
            map[s[left]]--;
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{

    string s = "AAB";
    int k = 1;

    cout << characterReplacement(s, k) << endl;
}