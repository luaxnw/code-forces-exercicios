#include <stdio.h>

int greatestIndex(int vet[], int n)
{
    int maxIdx = 0;
    for (int i = 1; i < n; i++)
    {
        if (vet[i] > vet[maxIdx])
        {
            maxIdx = i;
        }
    }
    return maxIdx;
}

int main()
{
    int nCoins = 0, sumOfCoins = 0;

    if (scanf("%d", &nCoins) != 1)
        return 0;

    int coinsValue[nCoins];

    for (int i = 0; i < nCoins; i++)
    {
        scanf("%d", &coinsValue[i]);
        sumOfCoins += coinsValue[i];
    }

    int myCoinsSum = 0;
    int returnCoins = 0;

    while (myCoinsSum <= sumOfCoins / 2)
    {
        int idx = greatestIndex(coinsValue, nCoins);

        myCoinsSum += coinsValue[idx];
        coinsValue[idx] = 0;

        returnCoins++;
    }

    printf("%d\n", returnCoins);

    return 0;
}