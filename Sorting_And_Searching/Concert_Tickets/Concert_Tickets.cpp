#include <bits/stdc++.h>
using namespace std;

int binaryLess(vector<int> vc, int val){
    int left = 0;
    int right = vc.size() - 1;
    int result = -1;
}

int main() {
    int n, m;
    cin >> n, m;
    vector<int> tickets;
    vector<int> prices;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        tickets.push_back(t);
    }

    for(int i = 0; i < m; i++){
        cin >> t;
        prices.push_back(t);
    }

    sort(tickets.begin(), tickets.end());
}