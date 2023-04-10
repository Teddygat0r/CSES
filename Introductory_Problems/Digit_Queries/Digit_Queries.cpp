#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll pten(ll c){
    ll ans = 1;
    for(ll i = 0; i < c; i++){
        ans *= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll input;
        cin >> input;
        ll counter = 0;
        while(input - (9 * pten(counter) * (counter + 1)) > 0){
            input -= 9 * pten(counter) * (counter + 1);
            counter++;
        }
        ll val = (input - 1) / (counter + 1) + (ll)pten(counter);
        cout << to_string(val)[(input - 1) % (counter + 1)] << "\n";
    }
}