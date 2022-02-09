#include <iostream>
using namespace std;

class Solution
{
public:
    long long maxsubarrsum(int arr[], int n)
    {
        int max = arr[0];
        int curr = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (curr >= 0)
            {
                curr += arr[i];
            }
            else
            {
                curr = arr[i];
            }
            if (max < curr)
            {
                max = curr;
            }
        }
        return max;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution s;
    cout << s.maxsubarrsum(arr, n) << endl;
    return 0;
}
