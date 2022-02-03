// A = 10 = 01010
// B = 20 = 10100
// we want a same as b so how many bits we are fliping
// 0-1, 1-0, 0-1, 1-0

#include <iostream>
using namespace std;

class Solution
{
public:
    int countBitsFlip(int a, int b)
    {
        int XOR = a ^ b;
        int count = 0;
        while (XOR > 0)
        {
            int d = XOR & 1;
            if (d == 1)
                count++;
            XOR = XOR >> 1;
        }
        // Your logic here
        return count;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    Solution s;
    cout << s.countBitsFlip(a, b) << endl;
    return 0;
}