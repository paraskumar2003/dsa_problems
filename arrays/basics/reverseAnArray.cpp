/*
Problem:
Reverse an array.


Approach:
Traverse the array from both ends and swap the elements until the middle is reached.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {1,2,3,4,5};

    int n1 = 0;
    int n2 = arr.size() - 1;

    while(n1 < n2){
        swap(arr[n1], arr[n2]);
        n1++;
        n2--;
    }

    for( int x: arr){
        cout << x << endl;
    }

    return 0;
}
