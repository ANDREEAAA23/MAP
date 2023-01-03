#include <stdlib.h>
#include <stdio.h>

int prim(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, i, j;
    printf("Introduceti N:");
    scanf("%d", &n);
    printf("Numerele care se pot aduna din numere prime sunt: ");
    for (i = 2; i <= n; i++)
    {
        int ok = 0;
        for (j = 2; j <= i / 2; j++)
            if (prim(j) && prim(i - j))
            {
                if (ok)
                {
                    printf("%d ", i);
                    break;
                }
                ok = 1;
            }
    }
 return 0;
}