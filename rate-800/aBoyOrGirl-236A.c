#include <stdio.h>

int main()
{

    char buffer[101];
    int counter = 0, distinctChar = 0;

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return 0;

    for (int i = 0; buffer[i] != '\0'; i++)
    {
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        char c = buffer[i];
        int seenBefore = 0;

        for (int j = 0; j < i; j++)
        {
            if (buffer[j] == c)
            {
                seenBefore = 1;
                break;
            }
        }

        if (!seenBefore && c != '\n')
            distinctChar++;
    }

    if (distinctChar % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");


    return 0;
}