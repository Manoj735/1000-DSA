#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int array[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    int maxno = array[0];
    int minno = array[n];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > maxno)
        {
            maxno = array[i];
        }
        if (array[i] < minno)
        {
            minno = array[i];
        }
    }
    cout << maxno << " " << minno << " ";
    return 0;
}