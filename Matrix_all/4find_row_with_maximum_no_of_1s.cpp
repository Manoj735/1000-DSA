#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int row_with_max_1s(vector<vector<int>> arr, int n, int m)
    {
        int max = -1;
        int c = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }
            if (c < count)
            {
                c = count;
                max = i;
            }
            count = 0;
        }
        if (max == -1)
        {
            return -1;
        }
        else
        {
            return max;
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    Solution s;
    auto max = s.row_with_max_1s(arr, n, m);
    cout << max << "\n";
    return 0;
}