#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse(string &str)
{
    stack<char> s;
    for (char i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}

int main()
{
    string str = "Reverse me";

    reverse(str);
    cout << str;

    return 0;
}