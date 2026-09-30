#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr, int target)
{

    sort(arr.begin(), arr.end());

    vector<vector<int>> result;

    for (int fixed = 0; fixed < arr.size() - 2; fixed++)
    {

        // duplicate check
        if (fixed > 0 && arr[fixed] == arr[fixed - 1])
        {
            continue;
        }

        int left = fixed + 1;
        int right = arr.size() - 1;

        while (left < right)
        {

            int sum = arr[fixed] + arr[left] + arr[right];
            if (sum == target)
            {

                result.push_back({arr[fixed], arr[left], arr[right]});
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1])
                {
                    left++;
                }

                while (left < right && arr[right] == arr[right + 1])
                {
                    right--;
                }
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
    vector<int> list = {1, 4, 2, 2, -4, -2, 0, 0, 0};
    vector<vector<int>> triplets = findTriplets(list, 0);

    for (auto items : triplets)
    {
        for (auto item : items)
        {
            cout << item << " ";
        }
        cout << endl;
    }
}
