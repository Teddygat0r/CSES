#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    multiset<ll> list;
    ll t;
    for(ll i = 0; i < n; i++){
        cin >> t;
        multiset<ll>::iterator it = list.upper_bound(t);
        if(it != list.end()) list.erase(it);
        list.insert(t);
    }
    cout << list.size();
}