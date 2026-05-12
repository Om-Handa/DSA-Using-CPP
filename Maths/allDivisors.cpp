#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> allDivisorsM1(int num){
    vector<int> res;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            res.push_back(i);
        }
    }

    return res;
}

vector<int> allDivisorsM2(int num){
    vector<int> res;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            res.push_back(i);
            
            if(i!=num/i) res.push_back(num/i);
        }
    }

    return res;
}

int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;
    vector<int> result=allDivisorsM2(num);
    for(int i: result){
        cout<<i<<" ";
    }
    return 0;
}