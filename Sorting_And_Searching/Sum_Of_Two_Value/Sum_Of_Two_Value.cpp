#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    vector<pair<int, int>> vals;
    cin >> n >> x;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        vals.push_back({t, i});
    }
    sort(vals.begin(), vals.end());

    int front = 0;
    int end = vals.size() - 1;
    while(end > front){
        int sum = vals[front].first + vals[end].first;
        if(sum > x){
            end--;
        }else if(sum < x){
            front++;
        }else{
            cout << vals[front].second + 1 << " " << vals[end].second + 1;
            return 0;
        }
        
    }
    cout << "IMPOSSIBLE";
}