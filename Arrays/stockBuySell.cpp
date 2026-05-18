#include<iostream>
#include<vector>
using namespace std;

int stockBuySell(vector<int> arr){
    int maxv=0;
    int minv=INT_MAX;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]<minv){
            minv=arr[i];
        }
        else{
            maxv=max(maxv, arr[i]-minv);
        }
    }
    return maxv;
}

int main(){
    vector<int> arr={7,1,5,3,6,4};
    int res= stockBuySell(arr);
    cout<<"Maximum Profit is: "<<res;
    return 0;
}