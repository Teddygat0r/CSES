#include <bits/stdc++.h>

using namespace std;

vector<int> hammingControl(int len)
{
    if (len == 1)
    {
        return {0, 1};
    }
    else
    {
        vector<int> sol;
        vector<int> tr = hammingControl(len - 1);
        for (unsigned long long i = 0; i < tr.size(); i++)
        {
            sol.push_back(tr[i]);
        }
        for (unsigned long long i = tr.size(); i > 0; i -= 1)
        {
            sol.push_back(tr[i - 1] + pow(2, len - 1));
        }
        
        return sol;
    }
}

string printByte(int num, int blength)
{
    string ans = "";
    for (int i = blength - 1; i >= 0; i--)
    {
        if (num / (int)pow(2, i) > 0)
        {
            num -= pow(2, i);
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }
    return ans;
}

int main()
{
    int size;
    cin >> size;
    vector<int> strs = hammingControl(size);
    for (unsigned long long i = 0; i < strs.size(); i++)
    {
        cout << printByte(strs[i], size) << "\n";
    }
}