#include<iostream>
using namespace std;

void reverseA(int arr[], int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void rotateClockwise(int arr[3][3], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverseA(arr[i], n);
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<"Matrix before Rotation"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateClockwise(arr,n);
    cout<<"Matrix After Rotation"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}