#include <stack>;

int findMinimumCost(string str)
{
    // Write your code here
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // ch is a closed brace

            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    //         stack contains invalid string
    int a = 0;
    int b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

// Minimum Add to Make valid string

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string str)
    {

        stack<char> s;

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];

            if (ch == '(')
            {
                s.push(ch);
            }
            else
            {
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    s.push(ch);
                }
            }
        }
        int count = 0;
        while (!s.empty())
        {
            cout << s.top() << endl;
            count++;
            s.pop();
        }
        cout << endl;
        return count;
    }
};

int main()
{
    Solution s;

    string str = "()))";
    cout << s.minAddToMakeValid(str);
    return 0;
}