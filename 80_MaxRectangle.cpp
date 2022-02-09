// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
public:
    int maxArea(int M[MAX][MAX], int n, int m)
    {
        // Your code here

        // computer area for first row

        int area = largestRectangleArea(M[0], m);

        // for remaining rows
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // row update by adding previous value
                if (M[i][j] != 0)
                    M[i][j] += M[i - 1][j];
                else
                    M[i][j] = 0;
            }

            area = max(area, largestRectangleArea(M[i], m));
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
// } Driver Code Ends