/**
 * Problem: Check if the given number is a armstrong number or not
 * 
 * Approach: Calculate the sum of the digits of the given number raise to the exponent of the count of digits in original number.
 * 
 * Time Complexity: O(n)
 * 
 * Space Complexity: O(1)
 */

#include<iostream>
using namespace std;

int count_digits(int b){

    int count = 0;
    while(b > 0){
        count++;
        b= b/10;
    }
    return count;
}

int is_armstrong(int a){

    int org = a;
    int count = count_digits(a);
    int num = 0; // to accumulate the number raise to the power of count
    while (org > 0)
    {
        // get the last number
        int last = org%10;
        int temp = 1;

        // raise to the power of count;
        for(int i = 0; i < count;i++){
            temp = temp * last;
        }
        num += temp;
        org = org/10;
    }
    return num == a;

}

int main(){
    cout << "Enter a number to check if it is armstrong" << endl;
    int n;
    cin >> n;

    if(is_armstrong(n)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}