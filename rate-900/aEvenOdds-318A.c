#include <stdio.h>

int main()
{
    long long n, k;

    scanf("%lld %lld", &n, &k);

    long long odd = (n + 1) / 2;

    if (k <= odd)
        printf("%lld\n", 2 * k - 1);
    else
        printf("%lld\n", 2 * (k - odd));

    return 0;
}