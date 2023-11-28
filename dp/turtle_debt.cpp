#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int turtle(const vector<vector<int>>& coins)
{
    int start{0};
    const int rows = coins.size();
    const int columns = coins.front().size();
    auto dp = coins;

    for () // какое условие?

        bool Flag = 0;
        // как сделать бинарный поиск, если нет максимального значения?

        // место для бинарного поиска

        //  k значение полученное в ходе поиска
        start = k;

        for (int row = 0; row < rows; ++row)
        {
            if (Flag) break;
            for (int column = 0; column < columns; ++column)
            {
                int m{0};
                if ((start + coins[rows][columns-1] < 0) & (start + coins[rows-1][columns] < 0))
                {
                    Flag = 1;
                    break;
                }

                dp[0][0] = start;
                if (row - 1 > 0) m = dp[row - 1][column];
                if (column - 1 > 0) m = max(m, dp[row][column - 1]);
                dp[row][columns] = m;
            }
        }

    return dp[rows][columns];
}

int main()
{

}