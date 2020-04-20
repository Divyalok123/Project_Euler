#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

int main()
{
    long ans = 1;
    for(int i = 2; i <= 20; i++)
    {
        long lcm = (i * ans)/gcd(i, ans);
        ans = lcm;
    }

    cout << ans << endl;
    return 0;
}

//Answer is 18044195.