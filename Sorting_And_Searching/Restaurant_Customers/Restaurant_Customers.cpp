#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, bool>> inputs;
    for(int i = 0; i < n; i++){
        int in, out;
        cin >> in >> out;

        inputs.push_back({in, true});
        inputs.push_back({out, false});
    }

    sort(inputs.begin(), inputs.end());
    int max = 0;
    int count = 0;
    for(auto d: inputs){
        if(d.second){
            count++;
            if(count > max) max = count;
        }else count--;

    }
    cout << max;
}