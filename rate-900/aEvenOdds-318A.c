#include <stdio.h>

int main()
{
    long long int n = 0, k = 0;
    int position = 0, j = 0;

    if (scanf("%lld %lld", &n, &k) != 2)
        return 0;

    k -= 1;
    long long int vet[n];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vet[j] = i + 1;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            vet[j] = i + 1;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", vet[i]);
        if (i == k)
        {
            printf("\n%lld\n", vet[i]);
            break;
        }
    }
    return 0;
}