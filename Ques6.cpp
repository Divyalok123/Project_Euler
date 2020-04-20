#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
#define MAX 1000000

int main()
{
    vector<int> v;
    bool prime[MAX];
    memset(prime, true, sizeof(prime));

    for(int i = 2; i*i < MAX; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*i; j < MAX; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i < MAX; i++)
    {
        if(prime[i] == true)
        {
            v.push_back(i);
        }
    }

    // cout << v.size() << endl;
    int n;
    cin >> n;
    cout << v.at(n) << endl;
    return 0;
}

//Answer is 104743