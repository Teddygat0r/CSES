#include <bits/stdc++.h>
using namespace std;

vector<long long> givens;
long long coins[10000000];

int main() {
    long long n, x;
    cin >> n >> x;
    long long t;
    coins[0] = 1;
    for(long long i = 0; i < n; i++){
        cin >> t;
        for(long long j = 0; j <= x - t; j++){
            coins[j + t] = (coins[j + t] + coins[j])% (long long)(pow(10, 9) + 7) ;
        }
    }  

    cout << coins[x];
}