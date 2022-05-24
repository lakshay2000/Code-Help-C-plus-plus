#include <bits/stdc++.h>
using namespace std;
#include <boost/algorithm/string.hpp>
void solve(int N, vector<string> command)
{
    stack<string> str;
    // Your code goes here
    for (int i = 0; i < command.size(); i++)
    {
        // cout << command[i];

        string s = command[i];

        char str2 = '{';

        bool b = boost::algorithm::contains(s, str2);

        if (b)
        {
            break;
        }
        else
        {
            str.push(s);
        }
    }

    while (!str.empty())
    {
        cout << ' ' << str.top();
        str.pop();
    }
}

// assign a 1
// {
//     assign b 2 {
//         assign a 3 print a} print b
//         print a
//             print c
// }

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<string> command(N);
    for (int i_command = 0; i_command < N; i_command++)
    {
        getline(cin, command[i_command]);
    }

    vector<int> out_;
    solve(N, command);
    // cout << out_[0];
    // for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    // {
    // 	cout << "\n" << out_[i_out_];
    // }
}