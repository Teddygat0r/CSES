#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> list;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        cin >> tmp;
        list.push_back(tmp);
    }
    ll min = INT_FAST64_MAX;

    for (int i = 0; i <= pow(2, n); i++)
    {
        ll s1 = 0;
        ll s2 = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) % 2 == 0)
            {
                s2 += list[j];
            }
            else
            {
                s1 += list[j];
            }
        }
        if(abs(s2 - s1) < min){
            min = abs(s2 - s1);
        }
    }

    cout << min;
}