#include <iostream>
using namespace std;

void mirrorHalfPyramid(int n){
    for(int i=0; i<n; i++){
        for(int k=0; k<=n-i-1; k++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1; i>0; i--){
        for(int k=0; k<=n-i; k++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
                                    
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    mirrorHalfPyramid(n);
    return 0;
}
