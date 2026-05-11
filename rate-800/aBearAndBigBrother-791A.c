#include <stdio.h>

int main()
{

    int limakH = 0, bobH = 0, years = 0;

    if (scanf("%i %i", &limakH, &bobH) != 2)
        return 1;

    while (1)
    {

        if (limakH > bobH)
            break;

        limakH = limakH * 3;
        bobH = bobH * 2;

        years++;
    }

    printf("%i\n", years);

    return 0;
}