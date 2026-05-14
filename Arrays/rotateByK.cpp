#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int begin, int end){
    while(begin<end){
        swap(arr[begin], arr[end]);
        begin++;
        end--;
    }
}

vector<int> leftRotatebyK(vector<int> arr, int n, int k){
    if(n==0||k==0) return arr;
    k=k%n;
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);
    return arr;
}

vector<int> rightRotatebyK(vector<int> arr, int n, int k){
    if(n==0||k==0) return arr;
    k=k%n;
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    return arr; 
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    vector<int> resL=rightRotatebyK(arr, n, 2);
    vector<int> resR=leftRotatebyK(arr, n, 2);
    for(int i: resL){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i: resR){
        cout<<i<<" ";
    }
    return 0;
}