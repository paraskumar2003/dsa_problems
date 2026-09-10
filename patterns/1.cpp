#include<iostream>
using namespace std;

// Let's print our first patters

int main(){

    cout << "Enter a number from 0-9:" << endl;
    int n;
    cin >> n;

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

}