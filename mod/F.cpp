#include <iostream>

using namespace std;

int make_mod(int a, int mod)
{
    return a % mod;
}

int mul_mod(int a, int b, int mod)
{
    return (a*b) % mod;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int n_mod = make_mod(n, m);
    int mul = n;

    for (int i = 0; i < n; ++i)
    {
        mul = mul_mod(mul, n, m); 
    }

    cout << mul;
}