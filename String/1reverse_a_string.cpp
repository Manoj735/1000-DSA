#include <bits/stdc++.h>

using namespace std;

void reverseString(string &str)
{
    int len = str.length();

    for (int i = 0; i < len / 2; ++i)
    {
        // Swap the two characters from corners
        swap(str[i], str[len - i - 1]);
    }
}

int main()
{
    string str;
    getline(cin, str);
    reverseString(str);
    cout << str;
    return 0;
}