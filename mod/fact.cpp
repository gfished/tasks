#include <iostream>
#include <cstdint>

using namespace std;

int64_t const MOD = 1'000'003;

int64_t make_mod(int64_t a)
{
    int64_t tmp = a % MOD;
    return (tmp >= 0LL)? tmp + MOD : tmp; 
}

int64_t mul_mod(int64_t mod_a, int64_t mod_b)
{
    int64_t tmp = mod_a * mod_b;
    return tmp % MOD;
}

int64_t f(int64_t n)
{
    if (n == 1) return 1;

    int64_t mod_n = make_mod(n);
    int64_t tmp = mul_mod(mod_n, f(n-1));
    return tmp;
}

int main()
{
    int64_t n;
    cin >> n;
    cout << f(n);
}