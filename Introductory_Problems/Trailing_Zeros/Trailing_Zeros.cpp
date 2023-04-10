#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c5 = 0, tmp = 0;
    for (int i = 5; i <= n; i+=5)
    {
        tmp = i;
        while (tmp % 5 == 0)
        {
            tmp /= 5;
            c5++;
        }
    }
    cout << c5;
}