#include <bits/stdc++.h>
using namespace std;
int steps[1000000];

int countsteps(int v){
    if(v == 0) return 0;
    if(steps[v] != 0) return steps[v];

    int minimum = (int)INFINITY;
    for(int i = 0; i < (int)(to_string(v).size()); i++){
        int dig = v / (int)pow(10, i) % 10;
        if(dig > 0) minimum = min(minimum, countsteps(v - dig) + 1);
    }
    steps[v] = minimum;
    return steps[v];
}

int main() {
    int n;
    cin >> n;
    cout << countsteps(n);
}