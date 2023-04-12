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
    while(begin < n - 1 && end <= n){
        if(end == n){
            csum -= nums[begin];
            begin++;
        }else if (begin == n - 1){
            csum += nums[end];
            end++;
        }else if(end - begin <= 1){
            csum += nums[end];
            end++;
        }else if(nums[end] >= -nums[begin]){
            csum += nums[end];
            end ++;
        }else{
            csum -= nums[begin];
            begin++;
        }
        if(csum > max) max = csum;
    }

    
    cout << max;
    
}