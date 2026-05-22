#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

//TC(nlogn)+O(n^2) SC=O(no. of Triplets) 
vector<vector<int>> threeSumOptimized(vector<int> arr){
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(i>0 && arr[i]==arr[i-1]) continue;

        int l=i+1, r=arr.size()-1;

        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];

            if(sum==0){
                res.push_back({arr[i], arr[l], arr[r]});
                l++, r--;
                while(l<r && arr[l]==arr[l-1])l++;
                while(l<r && arr[r]==arr[r+1])r--;
            }

            else if(sum<0) l++;
            else r--;
        }
    }
    return res;
}

int main(){
    vector<int> arr={-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res=threeSumOptimized(arr);

    for(auto row:res){
        for(int i:row) cout<<i<<" ";
        cout<<endl;
    }
}