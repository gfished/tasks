#include <iostream>
#include <cstdint>

const int64_t MOD = 1'000'000'007;

using namespace std;

int64_t make_mod(int64_t a)
{
    int64_t tmp = a % MOD;
    return (tmp >= 0LL)? tmp + MOD : tmp; 
}

int64_t sum_mod(int64_t mod_a, int64_t mod_b)
{
    int64_t tmp = mod_a + mod_b;
    return (tmp >= MOD)? tmp - MOD : tmp;
}

int64_t mul_mod(int64_t mod_a, int64_t mod_b)
{
    int64_t tmp = mod_a * mod_b;
    return tmp % MOD;
}

int64_t div_mod(int64_t mod_a, int64_t mod_b)
{

}

int main()
{
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;

    int64_t mod_a{make_mod(a)}, mod_b{make_mod(b)}, mod_c{make_mod(c)}, mod_d{make_mod(d)};

    int64_t sent1{mul_mod(mod_a, mod_d)}, sent2{mul_mod(mod_b, mod_c)}, down{mul_mod(mod_b, mod_d)};

    int64_t up{sum_mod(sent1, sent2)}, res{div_mod(up, down)};
}
