#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string s){ 
    if(i>=s.length()/2) return true;

    if(s[i]!=s[s.length()-1-i]) return false;

    return isPalindrome(i+1, s);
}

int main(){
    string s;
    cout<<"Enter a String ";
    getline(cin, s);
    if(isPalindrome(0, s)) cout<<"String is Palindrome";
    else cout<<"String is Not Palindrome";
    return 0;
}