#include <iostream>
#include <vector>
using namespace std;

void colorSort(vector<int> &arr){
    int l=0; 
    int r=arr.size()-1;
    int m= l+1;
    while(m<r){
        if(arr[m]==1){
            m++;
        }
        else if(arr[m]==0){
            swap(arr[l], arr[m]);
            l++;
        }
        else{
            swap(arr[m], arr[r]);
            r--;
        }
    }
}

int main(){
    vector<int> arr= {1, 0, 2, 1, 0};
    colorSort(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}