/*
Problem:
Find the largest element in an array.

Approach:
Traverse the array and keep track of the largest element seen so far.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(const vector<int>& arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << findLargestElement(arr) << endl;
    return 0;
}
