#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int findArea(vector<int> &heights)
{

    stack<int> st;
    int n = heights.size();

    int left = 0;
    int right = n - 1;
    int result = 0;

    vector<int> leftSmaller(n, -1);
    vector<int> rightSmaller(n, n);

    while (left < n)
    {
        while (!st.empty() && heights[st.top()] >= heights[left])
        {
            st.pop();
        }

        if(!st.empty()){
            leftSmaller[left] = st.top();
        }

        st.push(left);
        left++;
    }

    st = {};

    while (right >= 0)
    {

        while (!st.empty() && heights[st.top()] >= heights[right])
        {
            st.pop();
        }

        if (!st.empty())
        {
            rightSmaller[right] = st.top();
        }

        st.push(right);
        right--;
    }


    for(auto i:leftSmaller){
        cout << i << " ";
    }

    cout << endl;

    for(auto i:rightSmaller){
        cout << i << " ";
    }
    cout << endl;

    for(int i=0; i < n; i++){
        result = max(result,(rightSmaller[i] - leftSmaller[i] - 1) * heights[i]);
    }

    return result;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int area = findArea(heights);
    cout << area << endl;
    return area;
}