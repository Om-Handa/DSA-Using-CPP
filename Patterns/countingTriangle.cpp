#include <iostream>
using namespace std;

void countingTriangle(int n){
    int start=1;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<start++<<" ";
            
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    countingTriangle(n);
    return 0;
}
