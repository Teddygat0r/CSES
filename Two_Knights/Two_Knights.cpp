#include <bits/stdc++.h>

using namespace std;

long long nc2(long long n){
    return n * (n - 1) / 2;
}

long long positionCount(long long n, long long x, long long y) {
    long long count = 0;
    if(x + 2 <= n && y + 1 <= n) count++;
    if(x + 1 <= n && y + 2 <= n) count++;
    if(x - 1 > 0 && y + 2 <= n) count++;
    if(x - 2 > 0 && y + 1 <= n) count++;
    return count;
}

int main() {
    long long boardsize;
    cin >> boardsize;
    if(boardsize == 0) return 0;
    cout << "0\n";
    if(boardsize == 1) return 0;
    cout << "6\n";
    for(long long i = 3; i <= boardsize; i++){
        long long total = 0;
        long long tmp = 0;
        for(long long j = 1; j <= i; j++) {
            tmp += positionCount(i, j, 1);
        }
        total += tmp * (i - 2);

        for(long long j = i - 1; j <= i; j++) {
            for(long long k = 1; k <= i; k++){
                total += positionCount(i, k, j);
            }
        }

        total = nc2(pow(i, 2)) - total;
        cout << total << "\n";
    }
}
