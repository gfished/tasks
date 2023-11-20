#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec = {1, 4, 2, 5, 3};
    vector <int> dp(vec.size(), 0);

    for (int i = 0; i < vec.size(); ++i)
    {
        dp[i] = 1;
        for (int j = 0; j < i; ++j)     //1 2 2 3 0
        {
            if (vec[j] < vec[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int res{0};
    for (auto a : dp)
    {
        res = max(res, a);
    }

    cout << res;
}