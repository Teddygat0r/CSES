#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)
{
    for (auto a : v)
    {
        cout << a << " ";
    }
    cout << "\n";
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n + 1);
    vector<int> n2(n + 1);
    nums[0] = 0;
    n2[0] = 0;
    int t;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> t;
        nums[t] = i;
        n2[i] = t;
    }

    int tot = 1;
    for (int i = 2; i < n + 1; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            tot++;
        }
    }
    string ans = "";
    int a, b;
    int d, e;
    for (int i = 0; i < m; i++)
    {
        cin >> d >> e;
        a = min(n2[d], n2[e]);
        b = max(n2[d], n2[e]);

        if(nums[a] < nums[a - 1]){
            if(nums[b] > nums[a - 1]) tot--;
        }
        else if(nums[a] > nums[a - 1]){
            if(nums[b] < nums[a - 1]) tot++;
        }

        if(b != n){
            if(nums[b] > nums[b + 1]){
                if(nums[a] < nums[b + 1]) tot--;
            }else if(nums[b] < nums[b + 1]){
                if(nums[a] > nums[b + 1]) tot++;
            }
        }

        if(a + 1 == b){
            if(nums[a] < nums[b]){
                tot++;
            }else{
                tot--;
            }
        }else{
            if(nums[a] > nums[a + 1]){
                if(nums[b] < nums[a + 1]) tot--;
            }else if(nums[a] < nums[a + 1]){
                if(nums[b] > nums[a + 1]) tot++;
            }
            if(nums[b] < nums[b - 1]){
                if(nums[a] > nums[b - 1]) tot--;
            }else if(nums[b] > nums[b - 1]){
                if(nums[a] < nums[b - 1]) tot++;
            }
            


        }


        t = nums[a];
        nums[a] = nums[b];
        nums[b] = t;
        t = n2[d];
        n2[d] = n2[e];
        n2[e] = t;

        ans += to_string(tot) + "\n";
    }
    cout << ans;
}