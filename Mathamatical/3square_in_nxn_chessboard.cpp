#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Square = ((n * (n + 1) * (2 * n + 1)) / 6);
    cout << Square << endl;
}