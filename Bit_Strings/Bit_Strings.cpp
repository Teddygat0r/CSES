#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long dubz = 1;
    for(long long i = 0; i < n; i++) {
        dubz *= 2;
        dubz %= 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7;
    }

    cout << dubz;
}