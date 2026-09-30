#include<iostream>
#include<vector>
using namespace std;

void putZeroAtEnd(vector<int>& arr){

    int read = 0;
    int write = 0;

    while(read < arr.size()){

        if(arr[read] != 0){
            swap(arr[write],arr[read]);
            write++;
        }

        read++;
    }

}

int main(){

    vector<int> arr = {0,1,2,0,9,13,0};
    putZeroAtEnd(arr);
    for(auto i:arr){
        cout << i << " ";
    }

}

