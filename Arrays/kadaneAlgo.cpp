//Maximum Subarray sum

#include<iostream>
#include<vector>
using namespace std;

void maxSubarrayPrint(vector<int> arr){
    int sum=0, maxsum=LONG_MIN;
    int start=0; 
    int ansstart=-1,ansend=-1;
    for(int i=0; i<arr.size(); i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0) sum=0;
    }
    for(int i=ansstart; i<=ansend; i++){
        cout<<arr[i]<<" ";
    }
}

int kadaneAlgo(vector<int> arr){
    int sum=0, maxsum=LONG_MIN;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        maxsum=max(maxsum, sum);
    }
    return maxsum;
}

int main(){
    vector<int> arr={2,3,-7,4,7,-4};
    cout<<"Maximum Subarray Sum is: "<<kadaneAlgo(arr)<<endl;
    maxSubarrayPrint(arr);
    return 0;
}