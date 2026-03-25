#include <stdio.h>

int main()
{

    int m = 0, n = 0, maxDomino = 0;

    if (scanf("%i %i", &m, &n) != 2)
        return 0;

    int square = m * n;

    while (square >= 0)
    {

        if (square >= 2)
        {
            maxDomino++;
            square /= 2;
        }

        else
            break;
    }

    printf("%i\n", maxDomino);

    return 0;
}