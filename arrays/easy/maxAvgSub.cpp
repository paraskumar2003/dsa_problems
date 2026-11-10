#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {

        int left=0;
        int right=0;
        double sum = 0;

        double avg=std::numeric_limits<double>::lowest(); 
        int n = (int)nums.size();

         if(n < k){
            for(auto i:nums){
                sum += i;
            }
            return double(sum)/n;
        }

        while(right < nums.size()){
            sum += nums[right];

            if(right - left + 1 > k){
                sum -= nums[left];
                left++;
            }

            if(right - left + 1 == min(k,n)){
                avg = max(avg, double(sum / min(k, n)));
            }
            
            right++;
        }

        return avg;
}

int main(){
    vector<int> nums = {-1};
    int k = 1;
    cout << findMaxAverage(nums, k) << endl;
}

