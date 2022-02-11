// Input:
// N=3
// Mat=[[1,5,3],[2,8,7],[4,6,9]]
// Output:
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
    {
        // code here
        vector<int> ans;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                ans.push_back(Mat[i][j]);
            }
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Mat[i][j] = ans[i * N + j];
            }
        }

        return Mat;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}