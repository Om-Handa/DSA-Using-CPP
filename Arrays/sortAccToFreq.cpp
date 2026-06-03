#include<bits/stdc++.h>
using namespace std;

void sortFreq(vector<int> &arr){
    unordered_map<int, int> mp;
    for(int i: arr){
        mp[i]++;
    }
    sort(arr.begin(), arr.end(), [&](int a,int b){
        if(mp[a]==mp[b]) return a>b;
        return mp[a]>mp[b];
    });
}

int main(){
    vector<int> arr={1,1,3,4,4,4,2};
    sortFreq(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
}