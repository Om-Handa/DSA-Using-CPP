#include <iostream>
#include <vector>
using namespace std;

int maxOnes(vector<int> arr){
    int count=0; 
    int maxone=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            count++;
        }
        else{
            maxone=count;
            count=0;
        }
    }
    return max(maxone, count);
}

int main(){
    vector<int> arr= {1, 0, 1, 1, 0, 1};
    cout<<"Max No. of Consecutive Ones is: "<<maxOnes(arr);
    return 0;
}