/**
 * Problem: Find the gcd or hcf of the given two numbers
 * 
 * Approach: Recursively program the long-division method to find gcd
 */

#include<iostream>
using namespace std;

int find_gcd_of_two_numbers(int a, int b){
    if(a%b == 0){
        return b;
    }
    return find_gcd_of_two_numbers(b%a,a);
}

int main(){
    cout << "Enter two numbers to find GCD " << endl;
    int n1, n2;
    cin >> n1;
    cin >> n2;

    cout << "The GCD of the given two numbers " << find_gcd_of_two_numbers(n1,n2) << endl;
}