#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t){
    int sp=0, tp=0;

    while(sp<s.length() && tp<t.length()){
        if(s[sp]==t[tp]) sp++;
        tp++;
    }

    return sp==s.length();
}

int main(){
    string s="abc";
    string t="anbncn";
    if(isSubsequence(s, t)) cout<<"Is Subsequence";
    else cout<<"Not Subsequence";
    return 0;
}