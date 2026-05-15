#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int elementsOnceMap(vector<int> arr){
    unordered_map<int, int> freq{0};
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    for(auto i:freq){
        if(i.second==1){
            return i.first;
        }
    }
    return -1;
}

int elementsOnceVector(vector<int> arr){
    int maxn=arr[0];
    for(int i=1; i<arr.size(); i++){
        maxn=max(maxn, arr[i]);
    }
    vector<int> freq(maxn+1, 0);
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    
    for(int i=0; i<freq.size(); i++){
        if(freq[i]==1){
            return i;
        }
    }
    return -1;
}
//Most Optimized
int elementsOnceXor(vector<int> arr){
    int xorvalue=0;
    for(int i=0; i<arr.size(); i++){
        xorvalue=xorvalue^arr[i];
    }
    return xorvalue;
}

int main(){
    vector<int> arr={4,1,1,2,2};
    int res= elementsOnceXor(arr);
    cout<<"Element appearing once is: "<<res;
    return 0;
}