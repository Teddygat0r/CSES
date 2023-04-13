#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> nums;
    map<ll, ll> lastpos;
    ll t;
    ll largest = 0;
    ll cur = 0;
    ll head = 0;
    for(ll i = 0; i < n; i++){
        cin >> t;
        if(lastpos.count(t) == 0){
            lastpos.insert(pair<ll, ll> (t, i));
            cur++;
        }else{
            if(lastpos[t] >= head){
                cur = i - lastpos[t];
                head = lastpos[t] + 1;
            }else{
                cur++;
            }
            lastpos[t] = i;
        }

        largest = max(largest, cur);
    }
    cout << largest;
}