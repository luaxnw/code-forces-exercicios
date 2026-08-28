#include <iostream>

int main()
{

    int n = 0, max = 0, count = 0, aux = 0;

    std::cin >> n;

    int vet[n];

    for (int j = 0; j < n; j++){
        std::cin >> vet[j];
    }

    for (int i = 0; i < n; i++)
    {
        if (vet[i] >= aux)
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            count = 0;
        }

        aux = vet[i];
    }

    max += 1;

    std::cout << max;
    std::cout << "\n";

    return 0;
}