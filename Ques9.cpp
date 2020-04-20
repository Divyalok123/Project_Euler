#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long ans = 0;
    bool* prime = new bool[n+1];
    for(int i = 0; i <= n; i++)
    {
        prime[i] = true;
    }

    for(int i = 2; i*i <= n; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*i; j <= n; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == true)
        {
            ans += i;
        }
    }

    delete[] prime;
    cout << ans << endl;
    return 0;
}

//Answer is 142913828922