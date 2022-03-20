#include <iostream>
using namespace std;

class Solution
{
public:
    int minjumps(int arr[], int n)
    {
        int maxr = arr[0];
        int step = arr[0];
        int jump = 1;
        if (n == 1)
        {
            return 0;
        }
        else if (arr[0] == 0)
        {
            return -1;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (i == n - 1)
                {
                    return jump;
                }
                maxr = max(maxr, i + arr[i]);
                step--;
                if (step == 0)
                {
                    jump++;
                    if (i >= maxr)
                    {
                        return -1;
                    }
                    step = maxr - i;
                }
            }
        }
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
    cout << s.minjumps(arr, n) << endl;
    return 0;
}
