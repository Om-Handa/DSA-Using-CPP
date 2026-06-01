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

//As car needs gas to run, we initialize a gas variable to 0 initially
//At each step 1 unit of gas is reduced, if gas is less than arr[i] we add more gas
//If gas becomes less than 0 before we reach end we return false