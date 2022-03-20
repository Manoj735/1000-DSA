#include <iostream>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution s;
        cout << s.getMinDiff(arr, n, k) << endl;
    }
    return 0;
}