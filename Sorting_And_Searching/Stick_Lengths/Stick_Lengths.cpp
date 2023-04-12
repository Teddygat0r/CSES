#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;

    vector<double> vals;
    ll t;
    for(int i = 0; i < n; i++){
        cin >> t;
        vals.push_back(t);
    }
    sort(vals.begin(), vals.end());

    ll closest = vals[n / 2];
    ll c2 = vals[n / 2 + 1];

    ll tots = 0;
    ll tots2 = 0;
    for(auto i: vals){
        tots += abs(closest - i);
        tots2 += abs(c2 - i);
    }
    cout << min(tots, tots2);

}