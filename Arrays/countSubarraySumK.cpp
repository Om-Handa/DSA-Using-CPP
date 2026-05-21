#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countSubarray(vector<int> arr,int target){
    unordered_map<int, int> mp;
    int sum=0;
    int cnt=0;
    mp[0]=1;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];

        if(mp.find(sum-target)!=mp.end()){
            cnt+=mp[sum-target];
        }
        mp[sum]++;
    }
    return cnt;
}

int main(){
    vector<int> arr={1,-1,1,-1,1};
    int target=1;
    int res=countSubarray(arr, target);
    cout<<"Subarray Count with Given Sum is: "<<res;
    return 0;
}