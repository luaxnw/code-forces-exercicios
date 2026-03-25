#include <stdio.h>

int main()
{

    int n = 0, k = 0, kTh = 0, counter = 0;

    if (scanf("%i %i", &n, &k) != 2)
        return 0;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        if (scanf(" %i", &array[i]) != 1)
            return 0;

        if (i == (k - 1))
            kTh = array[i];
    }

    for (int j = 0; j < n; j++){

        if (array[j] >= kTh && array[j] > 0)
            counter++;
    }

    printf("%i\n", counter);

    return 0;
}