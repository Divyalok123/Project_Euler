#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long gcd(int a, long long b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    long long ans = 1;
    for (int i = 1; i <= 20; i++)
    {
        ans = (i * ans) / (gcd(i, ans));
    }

    cout << ans << endl;
    return 0;
}

//Answer is 232792560.