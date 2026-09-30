#include<string>
#include<stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std;


bool isAnagram(string str1, string str2){

    unordered_map<char, int> freq;

    if(str1.length()!=str2.length()){
        return false;
    }

    for(auto i:str1){
        freq[i]++;
    }

    for(auto i:str2){
        freq[i]--;
    }

    for(auto i:freq){
        if(i.second != 0){
            return false;
        }
    }

    return true;
}

int main(){

    string str1 = "ate";
    string str2 = "eat";

    cout << isAnagram(str1, str2);
}