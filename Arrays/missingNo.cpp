#include <iostream>
#include <vector>
using namespace std;

int missingNo(vector<int> arr){
    int n= arr.size()+1;
    int sum= (n*(n+1))/2;
    for(int i=0; i<n-1; i++){
        sum-=arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr= {1};
    cout<<"Missing No is: "<<missingNo(arr);
    return 0;
}