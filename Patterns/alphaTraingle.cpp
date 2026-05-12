#include <iostream>
using namespace std;

void alphaTriangle(int n){
    //Basic Triangle
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    //OR
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    
    // Reverse
    for(int i=n-1; i>=0; i--){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //Incrementing Row-Wise
    char ch='A';
    for(int i=0; i<n; i++){
        //or char ch='A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        ch=ch+1;
        cout<<endl;
    }

    //Alpha Pyramid
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch;
        }
        char ch='A'+i-1;
        for(int k=0; k<i; k++){
            cout<<ch;
            ch--;
        }
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    // OR
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        char ch='A';
        int bp=(2*i+1)/2;
        for(int k=1; k<=2*i+1;k++){
            cout<<ch;

            if (k<=bp) ch++;
            else ch--;
        }
        for(int l=0; l<=n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }

    //Decrementing alpha triangle
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    alphaTriangle(n);
    return 0;
}
