#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int minSubArray(vector<int>& arr,int target){

    int left = 0;
    int sum = 0;

    int minLength = INT_MAX;

    for(int right =0; right < arr.size();right++){

        sum += arr[right];

        while(sum >= target){
            minLength = min(minLength, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }

    return minLength == INT_MAX ? 0 : minLength;

}

int main(){

    vector<int> arr = {4,3,2,1,8,5};
    int target = 7;

    cout << minSubArray(arr, target) << endl;

}