#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//Hash Map for Unsorted arrays
pair<int, int> twoSumMap(vector<int> arr, int num){
    unordered_map<int , int> hashh;
    pair<int, int> pr;

    for(int i=0; i<arr.size(); i++){
        int comp=num-arr[i];
        if(hashh.count(comp)){
            return {hashh[comp],i};
        }
        else{
            hashh.insert({arr[i], i});
        }
    }

    return pr;
}

//Two Pointer for Sorted Arrays
pair<int, int> twoSumPointer(vector<int> arr, int num){
    int l=0, r=arr.size()-1;
    pair<int, int> pr;

    while(l<r){
        if(arr[l]+arr[r]==num){
            return {l,r};
        }
        else if(arr[l]+arr[r]<num){
            l++;
        }
        else{
            r--;
        }
    }

    return {-1,-1};
}

int main(){
    vector<int> arr={1,2,3,4};
    int num=2;
    pair<int,int> result= twoSumPointer(arr, num);
    cout<<"Indices are: "<<result.first<<", "<<result.second;
    return 0;
}