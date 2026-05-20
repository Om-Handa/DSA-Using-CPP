#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &arr){
    int breakpoint=-1;
    for(int i=arr.size()-2; i>=0; i--){
        if(arr[i]<arr[i+1]) {
            breakpoint=i;
            break;
        }
    }
    if(breakpoint==-1){
        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i=arr.size()-1; i>breakpoint; i--){
        if(arr[i]>arr[breakpoint]){
            swap(arr[i], arr[breakpoint]);
            break;
        }
    }
    reverse(arr.begin()+1+breakpoint, arr.end());
}

int main(){
    vector<int> arr={3,2,1};
    nextPermutation(arr);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}