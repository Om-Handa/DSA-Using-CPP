#include <iostream>
using namespace std;

int fibonacci(int n){ 
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

void fibonacciM2(int n){ 
    if(n==0){
        cout<<0;
    }
    else{
        int a=0;
        int b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=2; i<n; i++){
            int cur=a+b;
            a=b;
            b=cur;
            cout<<cur<<" ";
        }
    }

}

int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    for(int i=0; i<num; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    fibonacciM2(num);
    return 0;
}