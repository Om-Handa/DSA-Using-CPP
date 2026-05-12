#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num){
    int res=0;
    int rem=0;
    int temp=num;
    int noDigit=(int)(log10(num)+1);
    while(num>0){
        rem=num%10;
        res += pow(rem, noDigit);
        num/=10;
    }
    if(res==temp) return true;
    return false;
}

int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;
    if(isArmstrong(num)){
        cout<<num<<" is Armstrong Number";
    }
    else{
        cout<<num<<" is not Armstrong Number";
    }
    return 0;
}