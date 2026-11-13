#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // n is the destination index: height.size() - 1
    int minimumEnergy(vector<int> &height, int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return abs(height[1] - height[0]);
        }
        return min(
            minimumEnergy(height, n - 1) + abs(height[n] - height[n - 1]),
            minimumEnergy(height, n - 2) + abs(height[n] - height[n - 2]));
    }
};

int main()
{
    Solution solution;

    vector<int> height1 = {10, 20, 30, 10};
    cout << "Test 1: " << solution.minimumEnergy(height1, (int)height1.size() - 1)
         << " (expected 20 for the sample)\n";

    vector<int> height2 = {10, 10};
    cout << "Test 2: " << solution.minimumEnergy(height2, (int)height2.size() - 1)
         << " (expected 0)\n";

    vector<int> height3 = {30, 10, 60, 10, 60, 50};
    cout << "Test 3: " << solution.minimumEnergy(height3, (int)height3.size() - 1)
         << " (expected 40)\n";

    return 0;
}