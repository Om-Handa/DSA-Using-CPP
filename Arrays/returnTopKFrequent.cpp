#include<bits/stdc++.h>
using namespace std;

vector<int> topKElements(vector<int> &arr, int k){
    unordered_map<int,int> mp;
    for(int i: arr){
        mp[i]++;
    }

    vector<int> unique;
    for(auto it: mp){
        unique.push_back(it.first);
    }

    sort(unique.begin(), unique.end(), [&](int a, int b){
        if(mp[a]==mp[b]) return a>b;
        return mp[a]>mp[b];
    });

    vector<int> ans;

    for(int i=0; i<k; i++){
        ans.push_back(unique[i]);
    }
    return ans;
}

int main(){
    vector<int> arr={3,1,4,4,5,2,6,1};
    int k=2;
    vector<int>res= topKElements(arr,k);
    for(auto i: res){
        cout<<i<<" ";
    }
}