#include <stdio.h>

int main(){

    char word[1001];

    if (fgets(word, sizeof(word), stdin) == NULL)
        return 1;


    if (word[0] >= 65 && word[0] < 97)
        printf("%s", word);
    
    else{
        word[0] = word[0] - 32;
        printf("%s", word);
    }






    return 0;
}