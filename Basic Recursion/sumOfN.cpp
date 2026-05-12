#include <iostream>
using namespace std;

int sumOfN(int n){ 
    if(n==1) return 1;

    return n+ sumOfN(n-1);
}

int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    int result=sumOfN(num);
    cout<<result;
    return 0;
}