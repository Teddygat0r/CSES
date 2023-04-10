#include <bits/stdc++.h>

using namespace std;

string sol = "";

int hanoi(int n, string from, string to, string other){
    if(n == 1){
        sol += from + " " + to + "\n";
        return 1;
    } else {
        int count = hanoi(n - 1, from, other, to);
        sol += from + " " + to + "\n";
        count += hanoi(n - 1, other, to, from) + 1;
        return count;
    }
}



int main() { 
    int n;
    cin >> n;
    cout << hanoi(n, "1", "3","2") << "\n";
    cout << sol;

}