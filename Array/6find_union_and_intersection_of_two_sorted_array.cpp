#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    int dounion(int a[], int n, int b[], int m)
    {
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    Solution sol;
    cout << sol.dounion(a, n, b, m) << endl;
    return 0;
}

///
///
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

void print_intersection(int array1[], int size1, int array2[], int size2)
{
    int index_1 = 0;
    int index_2 = 0;

    while (index_1 < size1 && index_2 < size2)
    {
        if (array1[index_1] < array2[index_2])
        {
            index_1++;
        }
        else if (array2[index_2] < array1[index_1])
        {
            index_2++;
        }
        else
        {
            // if both are equal, then print any one
            cout << array2[index_2] << " ";
            index_1++;
            index_2++;
        }
    }
}

int main()
{
    int arr1[] = {1, 3, 4, 6, 8};

    int arr2[] = {2, 3, 5, 7, 8};

    print_intersection(arr1, 5, arr2, 5);

    return 0;
}
