#include <iostream>

using namespace std;

int f(int n)
{
    if (n == 0) return 1;
    if (n < 0) return 0;
    int res = f(n-1) + f(n-2) + f(n-3) + f(n-4) + f(n-5) + f(n-6); 
    return res;
};

int main()
{
    int n{0};
    cin >> n;
    cout << f(n);
}