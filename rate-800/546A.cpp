#include <iostream>
using namespace std;

int main()
{
    int initialPrice = 0, initialDollars = 0, quantity = 0, finalPrice = 0;

    cin >> initialPrice >> initialDollars >> quantity;

    for (int i = 1; i <= quantity; i++)
    {
        finalPrice += initialPrice * i;
    }

    if (initialDollars > finalPrice)
        cout << 0 << endl;
    else
    {
        cout << finalPrice - initialDollars << endl;
    }

    return 0;
}