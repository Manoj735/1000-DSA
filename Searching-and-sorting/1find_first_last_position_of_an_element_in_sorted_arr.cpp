#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << arr[0] << arr[n - 1];
}