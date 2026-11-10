#include <iostream>
#include <vector>

using namespace std;
bool checkIfAllZero(const vector<int>& arr){

        for(auto i:arr){
            if(i != 0){
                return false;
            }
        }

        return true;
}

vector<int> findAnagrams(string s, string p) {

        int left=0;
        int right=0;

        vector<int> freq(26,0);
        vector<int> anagramIndices;

        for(auto i:p){
            freq[i - 'a']++;
        }

        while(right < s.size()){

            freq[s[right] - 'a']--;

            while(right - left + 1 > p.size()){
                freq[s[left] - 'a']++;
                left++;
            }

            if(right - left + 1 == p.size()){
                if(checkIfAllZero(freq)){
                    anagramIndices.push_back(left);
                }
            }
            right++;
        }

        return anagramIndices;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
}
