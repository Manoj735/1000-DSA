#include <iostream>
using namespace std;

int square(int n)
{
    if (n < 0)
        n = -n;
    int res = n;

    for (int i = 1; i < n; i++)
    {
        res += n;
    }
    return res;
}
int main()
{
    for (int n = 1; n <= 5; n++)
    {
        cout << "n = "
             << ", n^2 " << square(n) << endl;
    }
    return 0;
}
// time complexity is 0(n)

// Square of a number using bitwise operators
#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
    // Base case
    if (n == 0)
        return 0;

    // Handle negative number
    if (n < 0)
        n = -n;

    // Get floor(n/2) using right shift
    int x = n >> 1;

    // If n is odd
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (square(x) << 2);
}
// square(n) = 0 if n == 0
//   if n is even
//      square(n) = 4*square(n/2)
//   if n is odd
//      square(n) = 4*square(floor(n/2)) + 4*floor(n/2) + 1

// Examples
//   square(6) = 4*square(3)
//   square(3) = 4*(square(1)) + 4*1 + 1 = 9
//   square(7) = 4*square(3) + 4*3 + 1 = 4*9 + 4*3 + 1 = 49
// Driver Code
int main()
{
    // Function calls
    for (int n = 1; n <= 5; n++)
        cout << "n = " << n << ", n^2 = " << square(n)
             << endl;
    return 0;
}
// time complexity is 0(Log n)