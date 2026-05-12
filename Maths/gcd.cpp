#include <iostream>
#include <cmath>
using namespace std;

//This may take more iterations as in worst case it will iterate to min of both values
int gcdM1(int n1, int n2){
    int minN=min(n1, n2);
    int gcd=1;
    for(int i=1; i<=minN; i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int gcdM2(int n1, int n2){
    int minN=min(n1, n2);
    int gcd=1;
    for(int i=minN; i>0; i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return gcd;
}

int EuclideanAlgo(int n1, int n2){

    while(n1>0 && n2>0){

        if(n1>n2){
            n1%=n2;
        }
        else{
            n2%=n1;
        }
    }
    if(n1==0) return n2;
    return n1;
}

int main(){
    int n1, n2;
    cout<<"Enter 1st Number ";
    cin>>n1;
    cout<<"Enter 2nd Number ";
    cin>>n2;
    int result=EuclideanAlgo(n1, n2);
    cout<<result;
    return 0;
}