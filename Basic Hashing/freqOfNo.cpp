#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int freqOfNo(vector<int> arr, int num){
    unordered_map<int , int> hashh;

    for(int i=0; i<arr.size(); i++){
        hashh[arr[i]]++;
    }
    return hashh[num];
    return 0;
}

int main(){
    vector<int> arr={1,2,3,2,1,2,2,2};
    int n;
    cout<<"Enter number to check frequency ";
    cin>>n;
    int result= freqOfNo(arr, n);
    cout<<"Frequency is: "<<result;
    return 0;
}