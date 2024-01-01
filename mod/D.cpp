#include <iostream>

using namespace std;

int const MOD = 1000007;

int make_mod(int a)
{
    int tmp = a % MOD;
    return (tmp >= 0)? tmp + MOD : tmp; 
}

int mul_mod(int mod_a, int mod_b)
{
    int tmp = mod_a * mod_b;
    return tmp % MOD;
}

int dif_mod(int mod_a, int mod_b)
{
    int tmp = mod_a - mod_b;
    return (tmp >= 0)? tmp + MOD : tmp;
}

int main()
{
    int a{0}, b{0};
    cin >> a >> b;
    int mod_a = make_mod(a), mod_b = make_mod(b);
    int aq = mul_mod(a, a), bq = mul_mod(b, b);
    int res = dif_mod(aq, bq);

    cout << res;
}