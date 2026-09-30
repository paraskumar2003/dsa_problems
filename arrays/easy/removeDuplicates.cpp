#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUniqueElements(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int write = 0;

    for (int read = 1; read < arr.size(); read++)
    {

        if (arr[read] == arr[read - 1])
        {
            continue;
        }
        else
        {
            write++;
            arr[write] = arr[read];
        }
    }

    for(auto item:arr){
        cout << item << " ";
    }
    return write + 1;
}

int main()
{

    vector<int> arr = {1, 1, 1, 2, 3, 4, 5, 5, 5, 6};

    int uniques = findUniqueElements(arr);

    cout << uniques << " ";
}
