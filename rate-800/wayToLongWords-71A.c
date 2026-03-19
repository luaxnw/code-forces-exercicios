#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    int length = 0;
    char word[101];

    if (scanf("%i", &n) != 1)
        return 0;

    while (n--)
    {
        scanf("%s", word);
        length = strlen(word);

        if (length > 10)
        {
            printf("%c%i%c\n", word[0], length - 2, word[length - 1]);
        }
        else
            printf("%s\n", word);
    }

    return 0;
}