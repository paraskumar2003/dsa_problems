/**
 * Problem: Print all the divisors of the given numbers
 * 
 * Approach: Iterate a for loop, until iterator * iterator > number, and
 * if number % iterator is 0, then print the iterator, and inside this block if 
 * iterator 
 * is not equal to the dividend, then print the dividend also
 * 
 * Time Complexity: O(log n)
 * 
 * Space Complexity: O(1)
 */

 #include<iostream>
 using namespace std;

 void printAllDivisors(int n){

    for(int i=1;i*i <=n; i++){

        if(n%i == 0){
            cout << i << endl;

            if(i != n/i){
                cout << n/i << endl;
            }
        }

    }
 }

 int main(){

    cout << "Enter a number: " << endl;
    int n;
    cin >> n;

    cout << "Divisors of the number: " << n << endl;
    printAllDivisors(n);

 }