#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> arr){
    int n=arr.size();
    int ele;
    int count=0;
    for(int i=0; i<n; i++){
        if(count==0){
            count=1;
            ele=arr[i];
        }
        else if(ele==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    int actcount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
            actcount++;
        }
    }

    if(actcount>n/2) return ele;

    return -1;
}

int main(){
    vector<int> arr={7, 0, 0, 1, 7, 7, 2, 7, 7};
    int res= majorityElement(arr);
    cout<<"Majority Element is: "<<res;
    return 0;
}