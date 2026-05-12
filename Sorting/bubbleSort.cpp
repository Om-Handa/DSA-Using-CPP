#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleRecursive(int arr[], int n){
    if(n==1) return;
    int didSwap=0;

    for(int i=0; i<n-1; i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            didSwap=1;
        }
    }
    if(didSwap==0) return;

    bubbleRecursive(arr, n-1);
}

int main(){
    int arr[]={5,4,6,3,8,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleRecursive(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}