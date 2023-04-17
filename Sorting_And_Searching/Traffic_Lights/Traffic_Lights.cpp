#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int t;
    set<int> indexes;
    set<int>::iterator bot, top;
    multiset<int> lengths;
    indexes.insert(0);
    indexes.insert(x);
    lengths.insert(x);
    string sol = "";

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        indexes.insert(t);
        auto it = indexes.find(t);
        
        lengths.erase(lengths.find(*(next(it)) - *(prev(it))));
        lengths.insert(t - *(prev(it)));
        lengths.insert(*(next(it)) - t);

        sol += to_string(*(lengths.rbegin())) + " ";
        
    }
    cout << sol;
}