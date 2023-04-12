#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> movies;

    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        movies.push_back({b, a});
    }

    sort(movies.begin(), movies.end());

    int cend = 0;
    int moviestot = 0;
    for(auto movie: movies){
        if(movie.second >= cend){
            cend = movie.first;
            moviestot++;
        }
    }
    cout << moviestot;
}