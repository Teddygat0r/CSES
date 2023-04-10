#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long c1 = 0;
    long long c2 = 0;
    vector<int> n1 = {};
    vector<int> n2 = {};
    
    for(int i = n; i > 0; i--) {
        if(c1 > c2) {
            c2 += i;
            n2.push_back(i);
        } else{
            c1 += i;
            n1.push_back(i);
        }
    }
    if(c1 != c2){
        cout << "NO";
    } else{
        cout << "YES\n";
        cout << n1.size() << "\n";
        for(unsigned long long i = 0; i < n1.size(); i=0){
            cout << n1.back() << " ";
            n1.pop_back();
        }
        cout << "\n" << n2.size() << "\n";
        for(unsigned long long i = 0; i < n2.size(); i=0){
            cout << n2.back() << " ";
            n2.pop_back();
        }
    }
}