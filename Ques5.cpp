#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    long sum1 = 0;
    long sum2 = 0;
    int n;
    cin >> n;

    sum1 = ((n)*(n + 1))/2;
    sum1 = sum1*sum1;
    sum2 = ((n)*(n+1)*(2*n + 1))/6;

    cout << sum1 - sum2 << endl;
    return 0;
}

//Answer is 25164150