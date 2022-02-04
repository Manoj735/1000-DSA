// google microsoft flipkart
// | A | B | C |
// | D | E | F | -> (m-1,n)
// | G | H | I |
//     (m, n-1) -> h position
// ABCFI, ABEHI, ADGHI, ADEFI,
// ADEHI, ABEFI

#include <iostream>
using namespace std;
// dimension of matrix m ,n
int numberofpath(int m, int n)
{
    if (m == 1 || n == 1)
    {
        // IF BOTH WILL BE 1 THE 1 PATH AVAILABLE
        return 1;
    }
    return numberofpath(m - 1, n) + numberofpath(m, n - 1);
}

int main()
{
    cout << numberofpath(3, 3);
}
//                                  (m, n)
//            (m-1,n)                                     (m, n-1)
//   (m-2, n)       (m-1, n-1)                (m-1, n-1)          (m-1, n-2)
//            (m-2, n-1)   (m-1, n-2)   (m-2, n-1)   (m-1,n-2)

// (m-2, n) (m-2, n-1)   (m-1, n-2)   (m-2, n-1)   (m-1,n-2) (m-1, n-2)
// 6