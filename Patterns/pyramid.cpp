#include <iostream>
using namespace std;

void pyramid(int n){
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
                                    
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    pyramid(n);
    return 0;
}
