#include <iostream>
using namespace std; 

int largestElement(int arr[], int n){
    int max =arr[0];

    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }  
    }
    return max;
}

int main(){
    int arr[]={15,40,2,300,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res= largestElement(arr, n);
    cout<<"Largest Element is: "<<res;
    return 0;
}