#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spirallytraverse(vector<vector<int>> mat, int r, int c)
    {
        r = mat.size();
        c = mat[0].size();
        int top = 0;
        int down = r - 1;
        int left = 0;
        int right = c - 1;
        vector<int> result;
        int dir = 0;
        while (top <= down && left <= right)
        {
            if (dir == 0)
            {
                for (int i = top; i <= right; i++)
                {
                    result.push_back(mat[top][i]);
                }
                top++;
            }

            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    result.push_back(mat[i][right]);
                }
                right--;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    result.push_back(mat[down][i]);
                }
                down--;
            }

            else if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    result.push_back(mat[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return result;
    }
};

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    Solution s;
    vector<int> result = s.spirallytraverse(mat, r, c);
    for (int i = 0; i < result.size(); i++)

        cout << result[i] << " ";
    cout << endl;
}