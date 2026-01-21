/**
 * Problem: Check if the given string is a palindrome
 * 
 * Approach: Compare the first and last character and move inward, if both are same, then given string is a palindrome.
 * 
 * Time Complexity: O(n)
 * 
 * Space Complexity: O(1)
 */

#include<iostream>
using namespace std; 

int is_palindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else{
            return 0;
        }
    }

    return 1;
}

int main(){
    cout << "Please enter a string" << endl;
    string s;
    cin >> s;
    cout << "Is Palindrome " << is_palindrome(s) << endl;
}