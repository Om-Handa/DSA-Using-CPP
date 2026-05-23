#include<bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> arr){

    int pre=1, suf=1;
    int maxp=INT_MIN;

    for(int i=0; i<arr.size(); i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;

        pre*=arr[i];
        suf*=arr[arr.size()-i-1];

        maxp=max(maxp, max(pre,suf));
    }
    return maxp;
}

int main(){
    vector<int> arr={2,-5,-2,-4,3};
    int res=maximumProduct(arr);
    cout<<"Maximum Product is: "<<res;
    return 0;
}