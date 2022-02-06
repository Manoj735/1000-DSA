#include <iostream>
using namespace std;
class matrix
{
    int a1[10][10], a2[10][10], c[10][10], sum, a[10][10], s[10][10], m[10][10], e[10][10], i, j, k, n, d;

public:
    void take_input();
    void print_input();
    void add_matrix();
    void sub_matrix();
    void mult_matrix();
    void transpose();
    void diagonal();
    void sumall();
};
void matrix::take_input()
{
    cout << "enter the size of square martix(n*n)";
    cin >> n;
    cout << "enter the elements of matrix 1";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a1[i][j];
    }
    cout << "enter the elements of matrix 2";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a2[i][j];
    }
}

void matrix::add_matrix()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            a[i][j] = a1[i][j] + a2[i][j];
    }
}
void matrix::sub_matrix()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            c[i][j] = a1[i][j] - a2[i][j];
    }
}
void matrix::mult_matrix()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            m[i][j] = 0;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                m[i][j] = m[i][j] + a1[i][k] * a2[k][j];
}

void matrix::diagonal()
{
    int d = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (i == j)
            {
                d = d + a1[i][j];
            }
    }
}

void matrix::sumall()
{
    sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            sum = sum + a1[j][i];
    }
}

void matrix::transpose()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            e[i][j] = a1[j][i];
    }
}

void matrix::print_input()
{
    cout << "\nadditon of matrix 1 and 2 is\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << "\n";
    }
    cout << "\nsubtration of matrix 1 and 2 is\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << c[i][j] << "\t";
        cout << "\n";
    }
    cout << "\nmultiplication of matrix 1 and 2 is\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << m[i][j] << "\t";
        cout << "\n";
    }
    cout << "\ntranspose of matrix 1\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << e[i][j] << "\t";
        cout << "\n";
    }
    cout << "\nsum of diagonal elements of matrix 1\n"
         << d;
    cout << "\nsum of all elements of matrix 1\n";

    cout << sum;
}

int main()
{
    matrix m;
    m.take_input();
    m.add_matrix();
    m.sub_matrix();
    m.mult_matrix();
    m.print_input();
    m.diagonal();
    m.transpose();
    m.sumall();
}
