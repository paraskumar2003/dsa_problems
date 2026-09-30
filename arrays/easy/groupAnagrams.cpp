#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> arr)
{

    unordered_map<string, vector<string>> map;
    vector<vector<string>> result;

    for (auto i : arr)
    {
        string sortedStr = i;
        sort(sortedStr.begin(), sortedStr.end());
        map[sortedStr].push_back(i);
    }

    for(auto arr:map){
        result.push_back(arr.second);
    }

    return result;
}

int main()
{

    vector<string> arr = {"tea", "ate", "ant", "car", "tan"};
    vector<vector<string>> group = groupAnagrams(arr);

    for (auto i : group)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}