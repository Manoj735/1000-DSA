// snapdeal
#include <bits/stdc++.h>
using namespace std;

class PowerSet
{
public:
    void printpowerset(char *set, int set_size)
    {
        // set = [a,b,c,d]
        // pow_set_size = pow(2, 4) = 16
        unsigned int pow_set_size = pow(2, set_size);
        int count, j;

        for (count = 0; count < pow_set_size; count++)
        {
            for (j = 0; j < set_size; j++)
            {
                if (count & (1 << j))
                    cout << set[j];
            }
            cout << endl;
        }
    }
};

int main()
{
    PowerSet s;
    char set[] = {'a', 'b', 'c', 'd'};
    s.printpowerset(set, 4);
    return 0;
}