// time complexity 0(n^2)
#include <iostream>
using namespace std;

int main()
{
    int mat[50][50];
    int i, j, n;
    int ele;

    cout << "size of matrix" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "enter element" << endl;
    cin >> ele;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == ele)
            {
                cout << "Element found at (" << i << ", " << j << ")\n";
            }
        }
    }
    cout << "n Element not found";
    return 0;
}

// optimum approach
// 0(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Searches the number x in matrix.If the
number is found, then prints its index position
and return true,returns false */
int searchnumber(int a[4][4], int nu, int x)
{
    if (nu == 0)
        return -1;
    int smallest = a[0][0], largest = a[nu - 1][nu - 1];
    if (x < smallest || x > largest)
        return -1;

    int i = 0, j = nu - 1;
    while (i < nu && j >= 0)
    {
        if (a[i][j] == x)
        {
            cout << " Found at " << i << ", " << j;
            return 1;
        }
        if (a[i][j] > x)
            j--;
        else
            i++;
    }
    cout << " not found";
    return 0;
}
int main()
{
    int a[4][4] = {{1, 2, 3, 4},
                   {10, 12, 13, 14},
                   {20, 22, 23, 24},
                   {30, 32, 33, 34}};
    searchnumber(a, 3, 23);
    return 0;
}