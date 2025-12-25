/**
 * Problem:
 * count Digits in the given number
 * 
 * Approach:
 * Use while loop until number/10 is greater than 0 and increment a variable by 1 in each iteration
 * 
 * Time Complexity
 * O(n)
 * 
 * Space Complexity
 * O(1)
 */

#include <iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n > 0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    cout << "Enter a number " << endl;
    int num;
    cin >> num;
    cout << "The number has " << countDigits(abs(num)) << " digits." << endl;
 }