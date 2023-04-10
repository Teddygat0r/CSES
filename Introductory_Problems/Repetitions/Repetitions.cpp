#include <bits/stdc++.h>

using namespace std;

int main() {
    string in;
    cin >> in;
    char cchar = -1;
    int longest = 0;
    int count = 1;
    for(auto & iter: in){
        if(iter == cchar){
            count += 1;
        }else{
            cchar = iter;
            if(count > longest)
                longest = count;
            count = 1;
        }
    }
    if(count > longest)
        longest = count;
    cout << longest;
}