#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<int>> sortmatrix(int n, vector<vector<int>> mat)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            k = i * n;
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = v[k + j];
            }
        }
        return mat;
    }
};