#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    
    vector<ll> nums;
    ll t;
    for(ll i = 0; i < n; i++){
        cin >> t;
        nums.push_back(t);
    }
    ll max = nums[0];
    ll begin = 0, end = 0;
    ll csum = 0;

    for(ll i = 0; i < n; i++){
        csum += nums[i];
        if(csum > max) max = csum;
        else if(csum < 0) csum = 0;
    }
    cout << max;
}