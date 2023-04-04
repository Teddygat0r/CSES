#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    scanf("%d", &a);
    bool nums[a];
    fill_n(nums, a, false);
    for(int x = 0; x < a - 1; x++){
        int temp;
        scanf("%d", &temp);
        nums[temp - 1] = 1;
    }


    for(int x = 0; x < a; x++){
        if(!nums[x]){
            printf("%d\n", x + 1);
        }
        //cout << nums[x] << " ";
    }
    
}

//This doesn't work for some reason and idk why.