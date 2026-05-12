#include <iostream>
using namespace std; 

int secondLargestElement(int arr[], int n){
    int max =arr[0];
    int secMax=INT_MIN;

    for(int i=1; i<n; i++){
        if(max<arr[i]){
            secMax=max;
            max=arr[i];
        }  
        else if(arr[i]>secMax && arr[i]!=max){
            secMax=arr[i];
        }
    }
    return secMax;
}

int main(){
    int arr[]={15,40,2,300,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res= secondLargestElement(arr, n);
    cout<<"2nd Largest Element is: "<<res;
    return 0;
}