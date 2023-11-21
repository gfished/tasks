#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{0};
    cin >> n;
    vector <long> dp(6);

    dp[0] = 1;
    for (int i = 1; i <= n; ++i)        //1 1 2 0 0 0
    {
        int sum{0};
        for (int j = 0; j < 6; ++j)
        {
            if (i - j >= 0) sum += dp[(i - j) % 6];
        }
        dp[i] = sum;
    }
    
    cout << dp[n % 6];
}