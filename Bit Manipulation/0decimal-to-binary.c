#include <stdio.h>

void toBinary(int N)
{
    int binary[32];
    int i = 0;
    while (N != 0)
    {
        binary[i] = N % 2;
        N = N / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    toBinary(n);
    printf("\n");
}