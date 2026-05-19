#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leadersInArray(vector<int> arr){
    int max=arr[arr.size()-1];
    vector<int> res;
    res.push_back(max);
    for(int i=arr.size()-2; i>=0; i--){
        if(max<arr[i]){
            max=arr[i];
            res.push_back(max);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> arr={10, 22, 12, 3, 0, 6};
    vector<int> res= leadersInArray(arr);
    for(int i: res){
        cout<<i<<" ";
    }
    return 0;
}