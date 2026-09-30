#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string &s, int left, int right){

    while (left < right)
    {

        char l = s[left];
        char r = s[right];

        if (l == r)
        {
            left++;
            right--;
        }
        else
        {

            return false;
        }
    }

    return true;

}


bool validPalindrome(string &s)
{

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {

        char l = s[left];
        char r = s[right];

        if (l == r)
        {
            left++;
            right--;
        }
        else
        {

            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
    }

    return true;
}

int main()
{

    string s = "abcba";

    cout << validPalindrome(s) << endl;
}
