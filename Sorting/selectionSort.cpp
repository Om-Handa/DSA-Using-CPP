#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    
    for(int i=0; i<n; i++){
        int mini=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i], arr[mini]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,4,6,3,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    return 0;
}