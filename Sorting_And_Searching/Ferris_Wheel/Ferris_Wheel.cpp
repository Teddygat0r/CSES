#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> list;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        list.push_back(t);
    }
    sort(list.begin(), list.end());

    int tot = 0;
    int beg = 0;
    int end = n - 1;
    while(end > beg){
        if(list[beg] + list[end] > x){
            tot++;
            end--;
        }
        else{
            beg++;
            end--;
            tot++;
        }
    }
    if(end == beg){
        tot++;
    }
    cout << tot;

}