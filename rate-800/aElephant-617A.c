#include <stdio.h>

int main(){

    int x = 0, out = 0;

    if (scanf("%i", &x) != 1) return 1;

    while (x != 0){

        if (x >= 5)
            x -= 5;

        else if (x == 4)
            x -= 4;
        
        else if (x == 3)
            x -= 3;
        
        else if (x == 2)
            x -= 2;
        
        else if (x == 1)
            x -= 1;


        out++;
    }

    printf("%i\n", out);


    return 0;
}