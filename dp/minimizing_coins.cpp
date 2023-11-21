#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
    int8_t n;
    uint16_t x;
    int res{-1};
    cin >> n >> x;
    vector <uint16_t> coins_types(n, 0);
    vector <uint16_t> dp(n, 0);
    for (int8_t i = 0; i < n; ++i)
    {
        cin >> coins_types[i];
    }

    //sort(coins_types.end(), coins_types.begin());

    for (int i = 0; i < n; ++i)     //0 0 0
    {
        for (int j = 0; j < x; ++j)
        {
            if (i - j >= 0) dp[j] = min(dp[j], dp[j - coins_types[i-1]]); //dp[j] всегда будет 0!!!
        }
    }
}