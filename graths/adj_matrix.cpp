#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int v, e;
    cin >> v >> e;

    vector<vector<bool>> adj(v, vector<bool>(v));

    int x, y;
    for (int i = 0; i < e; ++i)
    {
        cin >> x >> y;
        --x, --y;
        adj[x][y] = true;
        adj[y][x] = true;
    }

    for (const auto& j : adj)
    {
        for (const auto& k : j)
        {
            cout << k;
        }
        cout << '\n';
    }

}