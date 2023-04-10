#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    if(size == 1) {
        cout << "1";
    } else if(size == 2 || size == 3){
        cout << "NO SOLUTION";
    } else if(size == 4){
        cout << "3 1 4 2";
    } else {
        for(int x = 1; x <= size; x+=2){
            cout << x << " ";
        }
        for(int x = 2; x <= size; x+=2){
            cout << x << " ";
        }
    }
}