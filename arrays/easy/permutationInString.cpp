#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool sumIsZero(vector<int> arr){
        int sum = 0;

        for(auto i:arr){
            sum += i;
        }

        return sum == 0 ? true : false;
}

 bool checkInclusion(string s1, string s2) {

        vector<int> freq(26,0);

        for(auto c:s1){
            freq[c - 'a']++;
        }
        
        int left = 0;
        int right = 0;
        while(right < s2.size()){

            freq[s2[right] - 'a']--;

            if(right - left + 1 > s1.size()){
                freq[s2[left] - 'a']++;
                left++;
            }

            if(sumIsZero(freq) && right - left + 1 == s1.size()){
                return true;
            }

            right++;

        }

        return false;

    }

int main()
{

    string s1 = "ab";
    string s2 = "eidbcd";

    cout << checkInclusion(s1, s2) << endl;
}
