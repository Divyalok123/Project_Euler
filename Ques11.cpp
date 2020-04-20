#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long triangular(int n)
{
    long ans = (n*(n+1))/2;
    return ans;
}

int counter(long n)
{
    int count = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
            {
                count++;
            }
            else
            {
                count += 2;
            }
            
        }
    }

    return count;
}

int main()
{
    int ans = -1;
    int n = 100;
    while(1)
    {
        if(counter(triangular(n)) > 500)
        {
            ans = triangular(n);
            break;
        }
        n++;
    }

    cout << triangular(n) << endl;
    return 0;
}

//Answer is 76576500