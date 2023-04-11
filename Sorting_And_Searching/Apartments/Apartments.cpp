#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    int buys = 0;
    cin >> n >> m >> k;
    vector<int> desire;
    vector<int> apts;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        desire.push_back(t);
    }
    for(int i = 0; i < m; i++){
        cin >> t;
        apts.push_back(t);
    }

    sort(desire.begin(), desire.end());
    sort(apts.begin(), apts.end());

    int aptsc = 0, desirec = 0;
    while(aptsc < m && desirec < n){
        if(abs(desire[desirec] - apts[aptsc]) <= k){
            aptsc++;
            desirec++;
            buys++;
        }else if(apts[aptsc] > desire[desirec]){
            desirec++;
        }else{
            aptsc++;
        }
    }
    cout << buys;
}