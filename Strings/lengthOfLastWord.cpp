#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s){
    int n=s.length()-1;
    int count=0;

    while(n>=0 && s[n]==' '){
        n--;
    }
    while(n>=0 && s[n]!=' '){
        count++;
        n--;
    }
    return count;
}

int main(){
    string str="Hello World";
    int len=lengthOfLastWord(str);
    cout<<"Length of Last Word is: "<<len;
    return 0;
}