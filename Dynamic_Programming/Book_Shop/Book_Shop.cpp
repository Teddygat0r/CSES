#include <bits/stdc++.h>

using namespace std;

int n;
int tot[100000];
int x;

int main() {
    vector<int> price, pages;
    cin >> n >> x;
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        price.push_back(t);
    }
    for(int i = 0; i < n; i++){
        cin >> t;
        pages.push_back(t);
    }
    fill(tot+1, tot+x+1, -1);
    for(int i = 0; i < n; i++){
        for(int j = x - price[i]; j >= 0; j--){
            if(tot[j] != -1){
                tot[j + price[i]] = max(tot[j + price[i]], tot[j] + pages[i]);
            }
        }
    }

    for(int i = 0; i < x; i++){
        tot[i + 1] = max(tot[i + 1], tot[i]);
    }
    cout << tot[x];
    

}