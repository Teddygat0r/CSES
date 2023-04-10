#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    vector<long long> chars (26);
    string sol = "";
    string s2 = "";
    

    for(unsigned long long i = 0; i < n.length(); i++){
        chars[n[i] - 65]++;
    }
    
    int problmes = 0;
    char probchar = '1';
    for(unsigned long long i = 0; i < chars.size(); i++){
        if(chars[i] % 2 == 1){
            problmes++;
            probchar = (char)(i + 65);
            if(problmes == 2){
                cout << "NO SOLUTION";
                exit(0);
            }
        }
        sol.insert(sol.end(), chars[i] / 2, (char)(i+65));
        s2.insert(s2.begin(), chars[i] / 2, (char)(i+65));
    }
    if(probchar != '1') sol += probchar;
    sol += s2;
    
    cout << sol;
    
}