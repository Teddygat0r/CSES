#include <bits/stdc++.h>
using namespace std;

int binaryLess(vector<int> vc, int val)
{
    int left = 0;
    int right = vc.size();
    int result = -1;

    while (right > left)
    {
        int middle = (right + left) / 2;
        if (vc[middle] > val)
        {
            right = middle;
        }
        else if (vc[middle] <= val)
        {
            left = middle + 1;
            result = middle;
        }
    }
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        tickets.insert(-t);
    }

    for(int i = 0; i < m; i++){
        cin >> t;
        if(tickets.lower_bound(-t) == tickets.end()){
            cout << "-1\n";
        }else{
            cout << -*tickets.lower_bound(-t) << "\n";
            tickets.erase(tickets.lower_bound(-t));
        }
    }
}