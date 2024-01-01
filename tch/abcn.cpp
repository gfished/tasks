#include <limits>
#include <iostream>

using namespace std;

void f(int n)
{
    int a_res{0}, b_res{0}, c_res{0};
    int minim = numeric_limits<int>::max();
    for (int a = 1; a*a*a < n; ++a)
    {
        if (n % a != 0) continue;
        for (int b = a; b*b < n/a; ++b)
        {
            if (n % (a * b) != 0) continue;
            int c = n/a/b;

            if (2*(a*b + b*c + c*a) < minim) 
            {
                minim = 2*(a*b + b*c + c*a);
                a_res = a, b_res = b, c_res = c;
            }
        }
    }
    cout << minim << a_res << b_res << c_res;
}

int main()
{
    long int n{0};
    cin >> n;
    f(n); 
}