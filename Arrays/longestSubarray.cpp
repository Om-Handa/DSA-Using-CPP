#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//For Only Positives Two-Pointers/Sliding Window
int longestSubarrayPositives(vector<int> arr, int target){
    int l=0, r=0;
    int sum=arr[0];
    int longest=0;
    while(r<arr.size()){
        while(sum>target && l<=r){
            sum-=arr[l];
            l++;
        }
        if(sum==target){
            longest=max(longest, r-l+1);
        }
        r++;
        if(r<arr.size()){
            sum+=arr[r];
        }
    }
    return longest;
}
//For both postitives and negatives
int longestSubarray(vector<int> arr, int target){
    unordered_map<int, int> sumCalc;
    int sum=0;
    int maxl=0;
    
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];

        if(sum==target) maxl=i+1;
        if(sumCalc.find(sum-target)!=sumCalc.end()){
            maxl=max(maxl, i-sumCalc[sum-target]);
        }
        if(sumCalc.find(sum-target)==sumCalc.end()){
            sumCalc[sum]=i;
        }
    }
    return maxl;
}

int main(){
    vector<int> arr={1,2,2,1,1};
    int sum=3;
    int result= longestSubarray(arr, sum);
    cout<<"Longest Subarray is: "<<result;
    return 0;
}