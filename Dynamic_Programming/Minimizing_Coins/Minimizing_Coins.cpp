#include <bits/stdc++.h>
using namespace std;

vector<int> givens;
int coins[100000000];

int mincoins(int val){
    int min = -1;

    if(val < 0) return -1;
    if(coins[val] != 0) return coins[val];

    for(auto t: givens){
        int c = mincoins(val - t) + 1;
        if(c != 0 && (min == -1 || c < min)){
            min = c;
        }
    }

    coins[val] = min;
    return min;
}

int main() {
    int n, x;
    cin >> n >> x;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        coins[t] = 1;
        givens.push_back(t);
    }

    cout << mincoins(x);
}