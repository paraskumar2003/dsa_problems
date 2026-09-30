#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSubArray(vector<int> &arr, int target)
{

    int left = 0;
    int right = 0;

    int totalValueInsideWindow = arr[left];
    int minLength = INT_MAX;

    while (right < arr.size()){

        if (totalValueInsideWindow < target)
        {
            right++;
            totalValueInsideWindow += arr[right];
            continue;
        }

        if (totalValueInsideWindow >= target)
        {
            minLength = min(minLength, right - left + 1);
            totalValueInsideWindow -= arr[left];
            left++;
        }
    }

    return minLength;
}

int main()
{

    vector<int> arr = {2, 3, 1, 2, 4, 2};
    cout << minSubArray(arr, 7) << endl;
}