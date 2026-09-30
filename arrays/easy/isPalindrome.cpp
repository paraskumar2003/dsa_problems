#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

bool isPalindrome(string str)
{

    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {

        if (!isalnum(str[left]))
        {
            left++;
            continue;
        }

        if (!isalnum(str[right]))
        {
            right--;
            continue;
        }

        char l = tolower(str[left]);
        char r = tolower(str[right]);

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

int main()
{

    string str = "paras";

    cout << isPalindrome(str) << endl;
}