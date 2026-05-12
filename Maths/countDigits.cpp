#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num){
    // int count=0;
    // while(num!=0){
    //     num/=10;
    //     count++;
    // }
    // return (int)(log10(num)+1);
    return to_string(num).length();

}

int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    int result=countDigits(num);
    cout<<result;
    return 0;
}