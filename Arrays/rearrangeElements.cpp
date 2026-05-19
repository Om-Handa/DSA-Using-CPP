#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeElements(vector<int> arr){
    int pos=0, neg=1;
    vector<int> res(arr.size(),0);
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<0){
            res[neg]=arr[i];
            neg+=2;
        }
        else{
            res[pos]=arr[i];
            pos+=2;
        }
    }
    return res;
}

int main(){
    vector<int> arr={1,2,3,4,-1,-2,-3,-4};
    vector<int> res=rearrangeElements(arr);
    for(int i: res){
        cout<<i<<" ";
    }
    return 0;
}