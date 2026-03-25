#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char word1[102], word2[102];
    int word1Counter = 0, word2Counter = 0, aux = 0;

    if (fgets(word1, sizeof(word1), stdin) == NULL)
        return 0;
    if (fgets(word2, sizeof(word2), stdin) == NULL)
        return 0;


    for (int i = 0; word1[i]; i++)
    {
        word1[i] = tolower(word1[i]);
        word2[i] = tolower(word2[i]);
    }

    for (int i = 0; word1[i]; i++)
    {
        if (word1[i] > word2[i])
        {
            printf("1\n");
            aux = 1;
            break;
        }

        else if (word2[i] > word1[i])
        {
            printf("-1\n");
            aux = 1;
            break;
        }
    }

    if (aux != 1)
        printf("0\n");

    return 0;
}