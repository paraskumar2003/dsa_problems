/**
 * Problem: Check if the given number is prime
 * 
 * Approach: same approach used for printing divisors but with a counter, if counter
 * goes beyond 2, then consider as non-prime.
 * 
 * Time Complexity: O(n)
 * 
 * Space Complexity: O(1)
 */

 #include<iostream>
 using namespace std;

 bool is_prime(int n){

    int counter = 0;

    for(int i=0; i*i <= n; i++){
        if(n%i == 0){
            counter++;

            if(i != n/i){
                counter++;
            }
        }
    }

    return counter > 2 ? false : true;

 }

 int main(){
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    if(is_prime(n)){
        cout << "This number is a prime number" << endl;
    }else{
        cout << "This number is not a prime number" << endl;
    }
 }