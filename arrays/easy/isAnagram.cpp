#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


bool isAnagram(string s, string t) {
    
    unordered_map<char, int> freq;

    // check if s.length !== t.length
    // if true, it's not a anagram
    if(s.length() != t.length()){
        return false;
    }

    for(int i=0;i<s.length();i++){
        // store this in has map
        // and increment it by 1
        freq[s[i]]++;
    }

    for(int i=0;i<t.length();i++){
        // decrease the value against the char in hashmap
        freq[t[i]]--;
    }

    // final verdict, if any has map more than 0 against any char then it's an invalid anagram else a valid anagram
    for(auto pair:freq){
        if(pair.second != 0){
            return false;
        }
    }

    return true;

}

int main(){

    string s = "listen";
    string t = "silent";

    cout << isAnagram(s,t);
}