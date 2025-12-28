/**
 * Problem:
 * Reverse the given number
 * 
 * Approach:
 * Use while loop until num/10 is 0 and add the remainder to a string
 * 
 * Time Complexity
 * O(n)
 * 
 * Space Complexity 
 * O(1)
 */

#include <iostream>
using namespace std;

int reverseDigits(int n){
    int reverseNum = 0;
    while(n > 0){
        reverseNum = reverseNum*10 + n%10;
        n = n/10;
    }
    return reverseNum;
}

int main(){
    cout << "Enter a number: " << endl;

    int n;
    cin >> n;

    cout << "Reverse of the given number is: " << reverseDigits(n) << endl;
}