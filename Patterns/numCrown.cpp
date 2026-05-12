#include <iostream>
using namespace std;

void numCrown(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    numCrown(n);
    return 0;
}
