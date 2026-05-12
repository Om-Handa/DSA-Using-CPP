#include <iostream>
using namespace std;

void starTriangle1(int n){
    for(int i=1; i<=n; i++){
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
    starTriangle1(n);
    return 0;
}
