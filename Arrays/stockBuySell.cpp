#include<iostream>
#include<vector>
using namespace std;

int stockBuySell(vector<int> arr){
    int maxv=0;
    int minv=INT_MAX;

    for(int i=0; i<arr.size(); i++){
        minv=min(arr[i],minv);
        maxv=max(maxv, arr[i]-minv);
    }
    return maxv;
}

int main(){
    vector<int> arr={7,6,4,3,1};
    int res= stockBuySell(arr);
    cout<<"Maximum Profit is: "<<res;
    return 0;
}