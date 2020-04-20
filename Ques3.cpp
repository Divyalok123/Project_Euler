#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

bool isPalin(int n)
{
    bool res = true;

    string s = to_string(n);
    int i = 0;
    int j = s.length()-1;

    while(i < j)
    {
        if(s[i] != s[j])
        {
            res = false;
            break;
        }
        i++;
        j--;
    }

    return res;
}

int main()
{
    int ans = -1;
    for(int i = 100; i <= 999; i++)
    {
        for(int j = i; j <= 999; j++)
        {
            int x = i*j;
            if(isPalin(x))
            {
                if(x > ans)
                {
                    ans = x;
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}

//Ans is 906609