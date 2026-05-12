#include <iostream>
#include <unordered_set>
using namespace std; 

int noOfUniqueElements(int arr[], int n){
    int i=0, j=i+1;

    while(j<n){
        if(arr[i]==arr[j]) j++;
        else if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int noOfUniqueElementsSet(int arr[], int n){
    unordered_set<int> seen;
    int idx=0;
    for(int i=0; i<n; i++){
        if(seen.find(arr[i])==seen.end()){
            seen.insert(arr[i]);
            arr[idx]=arr[i];
            idx++;
        }
    }
    return idx;
}

int main(){
    int arr[]={1,1,2,2,2,3,3,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res= noOfUniqueElementsSet(arr, n);
    cout<<"No. of Unique Elements is: "<<res<<endl;
    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}