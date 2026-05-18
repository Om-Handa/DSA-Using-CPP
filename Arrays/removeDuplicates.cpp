#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int i=0, j=i+1;
    while(j<arr.size()){
        if(arr[i]==arr[j]) j++;
        else{
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> arr={2,2,3,3};
    int res= removeDuplicates(arr);
    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}