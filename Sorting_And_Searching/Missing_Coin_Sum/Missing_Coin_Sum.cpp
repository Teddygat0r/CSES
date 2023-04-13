#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int vsum(vector<int> s){
    int tot = 0;
    for(auto v: s){
        tot += v;
    }
    return tot;
}

int main() {
    int n;
    cin >> n;
    vector<int> coins;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        coins.push_back(t);
    }

    sort(coins.begin(), coins.end());
    ll low = 1;
    for(int i = 0; i < n && coins[i] <= low; i++){
        low += coins[i];
    }
    cout << low;
}