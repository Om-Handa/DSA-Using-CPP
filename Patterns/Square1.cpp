#include <iostream>
using namespace std;

void square1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    square1(n);
    return 0;
}
