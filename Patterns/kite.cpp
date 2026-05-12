#include <iostream>
using namespace std;

void kite(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            cout<<"*";
        }
        for(int l=0; l<i; l++){
            cout<<"*";
        }
        cout<<endl;
    }    
        for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=n; k>i; k--){
            cout<<"*";
        }
        for(int l=n-1; l>i; l--){
            cout<<"*";
        }
        cout<<endl;
    }                                                                          
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    kite(n);
    return 0;
}

//    *
//   **
//  ***
// ****