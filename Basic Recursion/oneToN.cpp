#include <iostream>
using namespace std;

void oneToN(int n, int printN){ 
    if(printN>n) return;
    
    cout<<printN<<" ";

    oneToN(n, printN+1);
}

void NToOne(int n){

    if(n==0) return;
    
    cout<<n<<" ";

    NToOne(n-1);
}

int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    oneToN(num,1);
    return 0;
}