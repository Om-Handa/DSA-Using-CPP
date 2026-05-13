#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr,int target){
    for(int i=0; i<arr.size(); i++ ){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    int res= linearSearch(arr,target);
    if(res==-1){
        cout<<"Target Not Found";
    }
    else{
        cout<<"Found at Index: "<<res;
    }
    return 0;
}