#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());

    /* keep the track of iterated for each pointer*/
    vector<vector<int>> result;

    /** first write the two pointers code */

    for (int fixed = 0; fixed < arr.size() - 2; fixed++)
    {

        int f = arr[fixed];

        if (fixed > 0 && arr[fixed] == arr[fixed - 1])
        {
            continue;
        }

        int left = fixed + 1;
        int right = arr.size() - 1;

        while (left < right)
        {

            int l = arr[left];
            int r = arr[right];

            int sum = arr[left] + arr[right] + arr[fixed];
            if (sum == target)
            {
                result.push_back({f, l, r});
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1])
                    left++;
                while (left < right && arr[right] == arr[right + 1])
                    right--;
                continue;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> list = {-4, -1, -1, 0, 0, 0, 1, 2, 8};
    vector<vector<int>> triplets = findTriplets(list, 3);

    for (auto arr : triplets)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}