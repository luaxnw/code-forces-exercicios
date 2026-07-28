#include <stdio.h>

int main()
{
    int n = 0;

    if (scanf("%d", &n) != 1) return 1; 
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d ", &vet[i]) != 1) return 1;
    }

     
    

    return 0;
}