#include<iostream>
#include<vector>
using namespace std;

void putZeroAtEnd(vector<int>& arr){


    /** use read and write pointers */
    int read = 0;
    int write = 0;

    while(read < arr.size()){

        /* put the non-zero numbers at front */
        if(arr[read] != 0){
            arr[write] = arr[read];
            write++;
        }
        read++;
    }

    while(write < arr.size()){
        arr[write] = 0;
        write++;
    }

}

int main(){

    vector<int> arr = {0,1,2,0,9,13,0};
    putZeroAtEnd(arr);
    for(auto i:arr){
        cout << i << " ";
    }

}