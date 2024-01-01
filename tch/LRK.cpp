#include <iostream>
#include <vector>
#include <bitset>

// пусть 1 <= L < R <= 10^9
int const MAXIMUM = 1000000000;

using namespace std;

void s(vector<int> primes)
{
    int counter = 0;
    bitset<MAXIMUM> bs;
    bs.set();
    bs[0] = 0, bs[1] = 0;

    for (int i = 2; i*i < MAXIMUM; ++i)
    {
        if (bs[i])
        {
            primes.push_back(i);
            for (int j = i*i; j < MAXIMUM; j+=i)
            {
                bs[j] = 0;
            }
        }
    }
}

int main()
{
    int L{0}, R{0}, K{0}, counter{0};
    cin >> L >> R >> K;
    vector<int> primes(K);
    s(primes);

    for (; L <= R; ++L)
    {
        bool Flag{0};
        for (int i = 0; i < K; ++i)
        {
            if (L % primes[i] == 0)
            {
                Flag = 0;
                break;
            }
        }
        if (!Flag) continue;
        counter++;
    }
}