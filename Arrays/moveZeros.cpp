#include <iostream>
#include <vector>
using namespace std; 

void moveZeros(vector<int> &arr, int n){
    int j=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
        j=i;
        break; }
    }
    int l=j+1;
    while(l<arr.size()&& j>=0){
        if(arr[l]!=0){
            swap(arr[l], arr[j]);
            l++;
            j++;
        }
        else{
            l++;
        }
    }
}

int main(){
    vector<int> arr={1,0,1,0,1,0,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr, n);
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}