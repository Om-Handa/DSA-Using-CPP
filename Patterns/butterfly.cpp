#include <iostream>
using namespace std;

void butterfly(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=2*(n-1); j>2*i; j--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            cout<<"*";
        }
        for(int j=0; j<(i*2)+2; j++){
            cout<<" ";
        }
        for(int j=n-1; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }           

    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;

        if (i > n) stars = 2 * n - i;

        for (int j = 1; j <= stars; j++) {
                cout << "*";
        }

        for (int j = 1; j <= spaces; j++) {
                cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
                cout << "*";
        }
        cout << endl;
        if (i < n) spaces -= 2;
        else spaces += 2;
        }

}

int main(){
    int n;
    cout<<"Enter no. of lines";
    cin>>n;
    butterfly(n);
    return 0;
}
