#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

vector<int> findTwoSum(vector<int> nums, int target){

    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++){
        int needed = target - nums[i];
        if (map.find(needed) != map.end())
        {
            return {map[needed], i};
        }
        else
        {
            map[nums[i]] = i;
        }
    }

    return {};
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, -4, -2};
    vector<int> twoSums = findTwoSum(nums, 4);
    for(auto i:twoSums){
        cout << i << endl;
    }
}