#include <stdio.h>

int main()
{

    int n = 0, totalPrograms = 0;
    int petyaV = 0, vasyaV = 0, tonyaV = 0;

    if (scanf("%i", &n) != 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (scanf("%i %i %i", &petyaV, &vasyaV, &tonyaV) != 3)
        {
            break;
        }

        if ((petyaV + vasyaV + tonyaV) >= 2)
        {
            totalPrograms++;
        }
    }
    
    printf("%i\n", totalPrograms);

    return 0;
}
