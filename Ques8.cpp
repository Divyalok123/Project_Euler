#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

// long long value(int n)
// {
//     long long ans = 500000*n - (n*n)*1000;
//     return ans;
// }

int main()
{   
    int a, b, c;
    long long ans = -1;
    bool flag = false;
    for(a = 1; a <= 333; a++)
    {
        for(b = a+1; b <= 500; b++)
        {
            c = 1000 - a - b;
            if(a*a + b*b == c*c)
            {
                ans = a*b*c;
                flag = true;
                break;
            }
        }

        if(flag){
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

//Answer is 31875000