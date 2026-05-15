#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, int> twoSum(vector<int> arr, int num){
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

int main(){
    vector<int> arr={1,2,3,4,2};
    int num=3;
    pair<int,int> result= twoSum(arr, num);
    cout<<"Indices are: "<<result.first<<", "<<result.second;
    return 0;
}