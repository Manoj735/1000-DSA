#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int setBits(int N)
    {
        // 8 in binary = 1000
        // so here set bits means 1
        // 1 is here 1 time so ans 1
        // now 8 > 0 => 8%2== 0 => 8/2 => 4
        // 4%2==0 => 4/2 = 2
        // 2%2==0 => 2/2 = 1
        // 1%2 == 1 cnt++ = 1
        int cnt = 0;
        while (N > 0)
        {
            if (N % 2 == 1)
            {
                cnt++;
            }
            N = N / 2;
        }
        return cnt;
    }
};

int main()
{
    int N;
    cin >> N;
    Solution sol;
    int cnt = sol.setBits(N);
    cout << cnt << endl;
}