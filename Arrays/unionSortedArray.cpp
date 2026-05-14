#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

vector<int> unionSet(vector<int> arr1, vector<int> arr2){
    set<int> s;
    for(int i=0; i<arr1.size(); i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<arr2.size(); i++){
        s.insert(arr2[i]);
    }
    vector<int> arr(s.begin(), s.end());
    return arr;
}

vector<int> unionHash(vector<int> arr1, vector<int> arr2){
    map<int, int> freq;
    vector<int> res;

    for(int i=0; i<arr1.size(); i++){
        freq[arr1[i]]++;
    }
    for(int i=0; i<arr2.size(); i++){
        freq[arr2[i]]++;
    }
    for(auto i: freq){
        res.push_back(i.first);
    }
    return res;
}

vector<int> unionPointer(vector<int> arr1, vector<int> arr2){
    int i=0;
    int j=0;
    vector<int> res;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(res.empty()|| res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(res.empty()|| res.back()!=arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(res.empty()|| res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<arr1.size()){
        if(res.empty()|| res.back()!=arr1[i]){
                res.push_back(arr1[i]);
        }
        i++;
    }
    while(j<arr2.size()){
        if(res.empty()|| res.back()!=arr2[j]){
                res.push_back(arr2[j]);
        }
        j++;
    }
    return res;
}

int main(){
    vector<int> arr1={1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2={2,3,4,4,5,11,12};
    vector<int> res=unionPointer(arr1, arr2);
    for(int i: res){
        cout<<i<<" ";
    }
    return 0;
}