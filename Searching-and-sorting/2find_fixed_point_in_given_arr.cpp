#include <iostream>
using namespace std;

int main()
{
    int n, i, x, arr[n];
    cout << "enter the size of arr" << endl;
    cin >> n;
    int count = 1;

    for (int i = count; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "find fixed point in arr" << endl;
    cin >> x;
    for (int i = count; i < n; i++)
    {
        if (arr[count] == x)
        {
            cout << x;
        }
        else
        {
            cout << "element is not found";
        }
    }
}