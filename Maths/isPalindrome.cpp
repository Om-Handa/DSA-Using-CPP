#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int num){
    long long rev=0; // else it may overflow when rev*10 
    int rem=0;
    int temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==temp) return true;
    return false;
}

bool isPalindromeBetter(int x){
    if(x<0|| (x%10==0 && x!=10)) return false;
    int rev=0; 
    int rem=0;
    while(x>rev){
        rem=x%10;
        rev=rev*10+rem%10;
        x/=10;
    }
    return (x==rev||x==rev/10);

}

int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;
    if(isPalindromeBetter(num)){
        cout<<num<<" is Palindrome";
    }
    else{
        cout<<num<<" is not Palindrome";
    }
    return 0;
}