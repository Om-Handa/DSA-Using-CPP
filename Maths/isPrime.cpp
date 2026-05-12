    #include <iostream>
    #include <cmath>
    #include <vector>
    using namespace std;

    bool isPrime(int num){
        if(num<=1) return false;

        for(int i=2; i*i<=num; i++){
            if(num%i==0) return false;
        }
        return true;
    }

    vector<int> allPrimes(int num){
        vector<int> res;
        
        for(int i=0; i<=num; i++){
            if(isPrime(i)) res.push_back(i);
        }

        return res;
    }

    int main(){
        int num;
        cout<<"Enter Number ";
        cin>>num;
        vector<int> result= allPrimes(num);
        for(int i: result){
            cout<<i<<" ";
        }
        return 0;
    }