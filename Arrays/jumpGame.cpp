#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
        int gas=0;

        for(int i :nums){
            if(gas<0) return false;
            else if(gas<i) gas=i;
            gas-=1;
        }
        return true;
}

int main(){
    vector<int> nums={2,3,1,1,4};
    if(canJump(nums)) cout<<"Can Jump";
    else cout<<"Can't Jump";
    return 0;
}