#include <stdio.h>
#include <string.h>

int main()
{

    int n = 0, x = 0;
    char buffer[10];

    if (scanf("%i ", &n) != 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            if (buffer[1] == '+')
                x++;
            else if (buffer[1] == '-')
                x--;
        }
    }

    printf("%i\n", x);
}