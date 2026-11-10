#include<iostream>
using namespace std;

bool isAnagram(string s, string t){

    unordered_map<char, int> map;

    if(s.length() != t.length()){
        return false;
    }

    for(auto i:s){
        map[i]++;
    }

    for(auto i:t){
        map[i]--;
    }

    for(auto pair:map){
        if(pair.second != 0){
            return false;
        }
    }

    return true;

}

int main(){

    string s = "ate";
    string t = "tea";

    cout << isAnagram(s,t) << endl;

}