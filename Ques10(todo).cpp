#include <iostream>
#include <cmath>
#include <algorithm>
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

    int product = -1;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            //down
            if(i+3 < n)
            {
                int ans1 = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
                if(ans1 > product)
                    product = ans1;
            }
            //right
            if(j+3 < m)
            {
                int ans2 = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
                if(ans2 > product)
                    product = ans2;
            }
            //right-down
            if(j+3 < m && i+3 < n)
            {
                int ans3 = arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                if(ans3 > product)
                    product = ans3;
            }
            //left-down
            if(j >= 3 && i+3 < n)
            {
                int ans4 = arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
                if(ans4 > product)
                    product = ans4;
            }

        }

    cout << product << endl;
    return 0;

}
