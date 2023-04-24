#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
vector<string> v;
vector<vector<int>> vals;
vector<vector<bool>> solved;
ll maxi = (ll)pow(10, 9) + 7;

ll countpaths(int x, int y){
    
    if(x == n || y == n || v[x][y] == '*') return 0;
    if(solved[x][y]) return vals[x][y];
    else if(x == n - 1 && y == n - 1){
        return 1;
    }
    else{
        solved[x][y] = true;
        vals[x][y] = (countpaths(x + 1, y) + countpaths(x, y + 1)) % maxi;
    }
    return vals[x][y];
}

int main(){
    cin >> n;
    string temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
        vals.push_back({});
        solved.push_back({});
        for(int j = 0; j < n; j++){
            vals[i].push_back(0);
            solved[i].push_back(false);
        }
    }

    cout << countpaths(0, 0);
}