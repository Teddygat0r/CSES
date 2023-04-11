#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    int t;
    int count = 1;
    for(int i = 0; i < n; i++){
        cin >> t;
        nums.push_back(t);
    }
    sort(nums.begin(), nums.end());
    int c = nums[0];
    for(int i = 1; i < n; i++){
        if(c != nums[i]) count++;
        c = nums[i];
    }
    cout << count;
}