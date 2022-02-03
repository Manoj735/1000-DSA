#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, i;
    cout << "enter your size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "reverse array is :" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}