// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long ans = n;
    for(long i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            while(n%i == 0)
            {
                n /= i;
                ans = i;
            }
    }

    if (n > 2)
    {
        ans = n;
    }

    cout << ans << endl;
    return 0;
}

//For 600851475143 answer is 6857