#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarrayXOR(int N, int arr[])
    {
        // code here
        if (N == 1)
            return arr[0];

        int curr = 1, max_xor = 0;
        for (int i = 0; i < N; i++)
        {
            curr = max(arr[i], curr ^ arr[i]);
            max_xor = max(max_xor, curr);
        }

        return max_xor;
    }
};

// { Driver Code Starts.
int main()
{
    int N, X;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    cout << ob.maxSubarrayXOR(N, arr) << endl;
    return 0;
}