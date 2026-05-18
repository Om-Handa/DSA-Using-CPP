#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int> &arr, int val){
    int k=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=val){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> arr={3,2,2,3};
    int val=2;
    int res= removeElement(arr, val);
    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}