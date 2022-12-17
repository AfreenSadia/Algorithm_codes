#include <bits/stdc++.h>
using namespace std;

void countCoin(int amount)
{
    int coins[9] = { 1500, 500, 200, 100,
                     50, 20, 10, 5, 1 };
    int Coin_Counter[9] = { 0 };

    for (int i = 0; i < 9; i++)
    {
        if (amount >= coins[i])
            {
            Coin_Counter[i] = amount / coins[i];
            amount = amount - Coin_Counter[i] * coins[i];
           }
    }

    cout << "Coin Count ->" << endl;
    for (int i = 0; i < 9; i++)
    {
        if (Coin_Counter[i] != 0)
            {
            cout << coins[i] << " : "
                << Coin_Counter[i] << endl;
           }
    }
}

int main()
{
    int amount = 1391;
    countCoin(amount);
    return 0;
}
