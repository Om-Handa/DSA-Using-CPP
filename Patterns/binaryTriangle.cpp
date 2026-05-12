#include <iostream>
using namespace std;

void binaryTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i+j)%2!=0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }       
    for(int i=0; i<n; i++){
        int start;
        if (i%2==0) start=1;
        else start =0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }       
                                    
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    binaryTriangle(n);
    return 0;
}
