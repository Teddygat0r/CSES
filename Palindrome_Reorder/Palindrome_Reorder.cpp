#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int chars[26];
    string sol = "";
    fill_n(chars, 26, 0);

    for(unsigned long long i = 0; i < n.length(); i++){
        cout << n[i] - 65 << " ";
        chars[n[i] - 65]++;
        if(chars[n[i] - 65] == 2){
            chars[n[i] - 65] = 0;
            sol += n[i];
        }
    }
    
    int problmes = 0;
    char probchar = '1';
    for(unsigned long long i = 0; i < sizeof(chars); i++){
        if(chars[i] == 1){
            problmes++;
            probchar = (char)(i + 65);
            cout << i;
            if(problmes == 2){
                cout << "NO SOLUTION";
                exit(0);
            }
        }
    }
    string sol2 = "";
    if(probchar != '1') sol2 += probchar;
    for(unsigned long long i = 0; i < sol.length(); i++){
        sol2.insert(sol2.begin(),1, sol[i]);
        sol2 += sol[i];
    }
    cout << sol2;
    
}