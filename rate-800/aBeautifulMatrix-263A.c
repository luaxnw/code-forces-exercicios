#include <stdio.h>

int main(){



    int matrix[5][5];
    int iPosition = 0, jPosition = 0, moves = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(scanf("%i", &matrix[i][j]) != 1) return 0;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matrix[i][j] == 1){
                iPosition = i;
                jPosition = j;
                break;
            }
        }

    }

    // posicao que quero:
    // i = 2
    // j = 2

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            

        }
    }

    












    return 0;
}