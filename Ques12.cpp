#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int* output = new int[m+2];
    for(int i = 0; i < m+2; i++)
    {
        output[i] = 0;
    }

    int col = m+1;
    int carry = 0;
    for(int j = m-1; j >= 0; j--)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        sum += carry;
        output[col] = sum%10;
        carry = sum/10;
        col--;
    }

    while(carry)
    {
        output[col] = carry%10;
        carry /= 10;
        col--;
    }

    int i = 0;
    while(output[i] == 0)
    {
        i++;
    }

    while(i < m+2)
    {
        cout << output[i] << "";
        i++;
    }

    return 0;
}