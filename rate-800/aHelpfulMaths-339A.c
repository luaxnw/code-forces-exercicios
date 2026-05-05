#include <stdio.h>
#include <string.h>

int main()
{

    char buffer[101];
    char newString[101];
    int aux = 0, key = 0, u = 0;

    if (fgets(buffer, 101, stdin) != NULL)
    {
        strcpy(newString, buffer);
        int len = strlen(newString);
        int array[(len / 2)];

        for (int i = 0; i < len; i++)
        {
            if (newString[i] != '+' && newString[i] != '\n')
            {
                array[aux] = newString[i] - '0';
                aux++;
            }
        }

        for (int j = 1;  j < aux; j++){
            key = array[j];
            u = j - 1;

            while (u >= 0 && array[u] > key){
                array[u+1] = array[u];
                u = u-1;
            }
            array[u+1] = key;

        }



        for (int i = 0; i < aux; i++)
        {
            printf("%i", array[i]);
            if( i+1 < aux)
                printf("+");
        }
    }

    return 0;
}