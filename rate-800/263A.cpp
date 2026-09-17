#include <iostream>
using namespace std;

int main()
{

    int matrix[5][5], moves = 0, oneInI = 0, oneInJ = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                oneInI = i;
                oneInJ = j;
            }
        }
    }

    while ((oneInI != 2) || (oneInJ != 2))
    {
        if (oneInI > 2)
        {
            oneInI--;
            moves++;
        }
        if (oneInI < 2)
        {
            oneInI++;
            moves++;
        }
        if (oneInJ > 2)
        {
            oneInJ--;
            moves++;
        }
        if (oneInJ < 2)
        {
            oneInJ++;
            moves++;
        }
    }

    cout << moves << endl;

    return 0;
}