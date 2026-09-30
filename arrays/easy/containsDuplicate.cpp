#include<unordered_set>
#include<iostream>
using namespace std;

bool containsDuplicate(string str){

    unordered_set<char> set;

    for(auto i:str){
        if(set.find(i) != set.end()){
            return true;
        }else{
            set.insert(i);
        }
    }

    return false;
}


int main(){

    string str="paras";
    cout << containsDuplicate(str);

}