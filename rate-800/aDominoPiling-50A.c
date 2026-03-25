#include <stdio.h>

int main()
{

    int m = 0, n = 0, maxDomino = 0;

    if (scanf("%i %i", &m, &n) != 2)
        return 0;

    int square = m * n;

    while (1)
    {

        if (square >= 2)
        {
            square -= 2;
            maxDomino++;
        }

        else
            break;
    }

    printf("%i\n", maxDomino);

    return 0;
}