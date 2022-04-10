#include <iostream>
#include <stack>
#include <string>
using namespace std;

void valid(string s)
{
    stack<char> st;
    int length = s.length();
    char top;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
    }
}

int main()
{
}