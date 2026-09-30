#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool compareMaps(unordered_map<char, int> &o_freq, unordered_map<char, int> &n_freq)
{

    for (auto i : o_freq)
    {
        if (n_freq[i.first] != i.second)
        {
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2)
{

    unordered_map<char, int> o_freq;
    unordered_map<char, int> n_freq;

    for (auto i : s1)
    {
        o_freq[i]++;
    }

    int left = 0;

    for (int right = 0; right < s2.size(); right++)
    {
        n_freq[s2[right]]++;

        if (right - left + 1 > s1.size())
        {
            n_freq[s2[left]]--;
            left++;
        }

        if (compareMaps(o_freq, n_freq) && right - left + 1 == s1.size())
        {
            return true;
        }
    }

    return false;
}

int main()
{

    string s1 = "ab";
    string s2 = "eidbacd";

    cout << checkInclusion(s1, s2) << endl;
}
