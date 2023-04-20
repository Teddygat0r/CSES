#include <bits/stdc++.h>
using namespace std;

vector<long long> givens;
long long coins[100000000];
bool solved[100000000];

long long mincoins(long long val){
    long long min = 0;

    if(solved[val]) return coins[val];
    
    for(auto t: givens){
        if(t == val) min++;
        if(val - t > 0)
            min += mincoins(val - t);
    }
    coins[val] = min % (long long)(pow(10, 9) + 7);
    solved[val] = true;
    return min % (long long)(pow(10, 9) + 7);
}

long long main() {
    long long n, x;
    cin >> n >> x;
    long long t;
    for(long long i = 0; i < n; i++){
        cin >> t;
        givens.push_back(t);
    }

    cout << mincoins(x);
}