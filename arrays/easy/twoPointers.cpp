#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    vector<int> indices={};

    while(left < right){
        int sum = numbers[left]+numbers[right];

        if(sum == target){
            indices.push_back(left+1);
            indices.push_back(right+1);
            return indices;
        }

        if(sum > target){
            right--;
        }else{
            left++;
        }

    }

    return {};

   
}

int main(){
    vector<int> nums={1,3,5,7,11,15};
    vector<int> indices=twoSum(nums,20);
    for(auto num:indices){
        cout << num << endl;
    }
}

