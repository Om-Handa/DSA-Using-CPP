#include<bits/stdc++.h>
using namespace std;

int longestSubarraySumZero(vector<int> arr){
    int maxl=0;
    int sum=0;
    unordered_map<int, int> mp;

    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];

        if(sum==0){
            maxl=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxl=max(maxl, i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return maxl;
}

int main(){
    vector<int> arr={9,-3,3,-1,6,-5};
    int res=longestSubarraySumZero(arr);
    cout<<"Longest Subarray with Sum zero is: "<<res;
    return 0;
}