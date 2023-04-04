#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin >> size;

    long long count = 0;
    long long current = 0;
    if(size > 0){
        cin >> current;
        for(int i=0; i < size - 1; i++){
            long long next;
            cin >> next;

            if(next < current){
                count += current - next;
            } else {
                current = next;
            }
        }
    }
    cout << count;
}