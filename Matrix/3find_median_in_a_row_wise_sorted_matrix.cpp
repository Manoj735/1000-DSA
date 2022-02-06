// R = 3 , C= 3
// M =     [[1, 3, 5],
//         [2, 6, 9],
//         [3, 6, 9]]
// sorting = 1 2 3 3 5 6 6 9 9
// median = 5

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        vector<int> v;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int n = v.size();
        int mid = n / 2;
        return v[mid];
    }
};

int main()
{
    int r, c;
    cout << "enter no. of row and column" << endl;
    cin >> r >> c;
    cout << "rows are :" << r << endl
         << "columns are:" << c << endl;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    Solution s;
    cout << s.median(matrix, r, c) << endl;
    return 0;
}