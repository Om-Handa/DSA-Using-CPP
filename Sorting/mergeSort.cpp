#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left= low;
    int right= mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }

    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low>=high) return;

    int mid= low+(high-low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main(){
    vector<int> arr={5,4,6,3,8,2,1};
    int n=arr.size();
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}