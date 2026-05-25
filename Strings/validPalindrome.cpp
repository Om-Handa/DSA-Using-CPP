#include<iostream>
using namespace std;


bool isPalindrome(string s) {
    string st;
    for(char ch:s){
        if(isalnum(ch)){
        st+=tolower(ch);
        }
    }
    int i=0, j=st.length()-1;
    while(i<j){
        if(st[i]==st[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}

int main(){
    string s="Madam:";
    
    if(isPalindrome(s)) cout<<"Valid Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}