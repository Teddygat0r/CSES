#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

ull factorial(ull n){
    ull mult = 1;
    for(ull i = 1; i <= n; i++){
        mult *= i;
    }
    return mult;
}

int main() {
    string mystr;
    vector<string> stringlist;

    cin >> mystr;
    sort(mystr.begin(), mystr.end());

    stringlist.push_back(mystr);
    while(next_permutation(mystr.begin(), mystr.end())) {
        stringlist.push_back(mystr);
    }

    cout << stringlist.size() << "\n";
    string sol = "";
    for(ull i = 0; i < stringlist.size(); i++){
        sol += stringlist[i] + "\n";
    }
    cout << sol;

    
}