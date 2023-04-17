#include <bits/stdc++.h>
using namespace std;

long long methods[1000000];

long long solve(long long ind){
    long long tot = 0;
    if(ind == 1) return 1;
    if(methods[ind] > 1) return methods[ind];
    
    if(ind > 6) tot += solve(ind - 6) % (long long)(pow(10, 9) + 7);
    if(ind > 5) tot += solve(ind - 5) % (long long)(pow(10, 9) + 7);
    if(ind > 4) tot += solve(ind - 4) % (long long)(pow(10, 9) + 7);
    if(ind > 3) tot += solve(ind - 3) % (long long)(pow(10, 9) + 7);
    if(ind > 2) tot += solve(ind - 2) % (long long)(pow(10, 9) + 7);
    if(ind > 1) tot += solve(ind - 1) % (long long)(pow(10, 9) + 7);
    
    methods[ind] += tot % (int)(pow(10, 9) + 7);
    return methods[ind];
}

int main() {
    //setup
    methods[1] = methods[2] = methods[3] = methods[4] = methods[5] = methods[6] = 1;
    long long n;
    cin >> n;
    cout << solve(n);
}