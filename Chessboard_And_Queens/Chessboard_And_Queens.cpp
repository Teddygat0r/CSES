#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

//pov random number generator, works in python..

void printvec(vector<vector<int>> v){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "\n\n\n";
}

int cb(int row, vector<vector<int>> inp){
    int count = 0;
    for(ull i = 0; i < inp.size(); i++){
        bool legit = true;
        for(int j = 0; j <= row; j++){
            if(inp[j][i] == 2){
                legit = false;
            }else if(i - j >= 0 && inp[row - j][i - j] == 2){
                legit = false;
            }else if(i + j < inp.size() && inp[row - j][i + j] == 2) {
                legit = false;
            }
        }

        if(legit && inp[row][i] != 1){
            if(row == 7){
                count++;
            } 
            else{
                inp[row][i] = 2;
                count += cb(row + 1, inp);
                inp[row][i] = 0;
            }
        }
    }
    return count;
}

int main() {
    vector<vector<int>> vct;

    for(int i = 0; i < 8; i++){
        string in;
        cin >> in;
        vector<int> tm;
        vct.push_back(tm);
        for(ull j = 0; j < in.length(); j++) {
            if(in[j] == '*'){
                vct[i].push_back(1);
            }else{
                vct[i].push_back(0);
            }
        }
    }
    

    cout << cb(0, vct);
    
    
}