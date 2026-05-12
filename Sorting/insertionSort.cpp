#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionRecursive(int arr[], int i, int n){
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    insertionRecursive(arr, i+1, n); 
}

int main(){
    int arr[]={5,4,6,3,8,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionRecursive(arr, 0,n);
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}