#include <stdio.h>

int main()
{
    int w = 0;

    if (scanf("%i", &w) != 1) return 0;

    if (w % 2 == 0 && w > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}