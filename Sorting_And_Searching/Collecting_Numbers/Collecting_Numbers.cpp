#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nums;

int main(){
    cin >> n;
    int tot = 1;
    int prev, t;
    cin >> prev;
    for(int i = 1; i <n; i++){
        cin >> t;
        if(t < prev) tot++;
        prev = t;
    }
    cout << tot;


}