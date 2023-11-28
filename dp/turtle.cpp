#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int turtle(const vector<vector<int>>& coins)
{
    const int rows = coins.size();
    const int columns = coins.front().size();
    auto dp = coins;

    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < columns; ++column)
        {
            int m{0};
            if (row - 1 >= 0) m = dp[row - 1][column];
            if (column - 1 >= 0) m = max(m, dp[row][column - 1]);
            dp[row][columns] = m;
        }
    }

    return dp[rows][columns];
}

int main()
{
    int rows{0}, columns{0};
    vector<vector<int>> coins(rows);

    for (int i = 0; i < rows; ++i)
    {
        vector<vector<int>> a(columns);

        coins[i] = a;
        coins.push_back(a); //????? как добавлять массивы в массив?

        for (int j = 0; j < columns; ++j)
        {
            int b;
            cin >> b;
            coins[i][j] = b;
        }
    }

    cout << turtle(coins);
}