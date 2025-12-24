/*
Problem:
Find the second largest element in an array without sorting.

Approach:
Traverse the array and keep track of the largest element in array

Time Complexity:
O(n)

Space Complexity:
O(1)
*/
#include <iostream>
#include <vector>
using namespace std;


int findSecondLargestNumber(int arr[],int n){
    
    int largest = 0;
    int secondLargest = 0;

    for(int i=0;i < n;i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    
    int arr[] = {17,23,37,14,51};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findSecondLargestNumber(arr,n) << endl;
}