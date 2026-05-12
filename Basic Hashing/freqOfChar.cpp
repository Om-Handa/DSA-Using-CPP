#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int freqOfNoHash(string s, int num){
    unordered_map<int , int> hashh;

    for(int i=0; i<s.length(); i++){
        hashh[s[i]]++;
    }
    return hashh[num];
}

int freqOfNoArray(string s, int num){
    int hashh[255]={0};

    for(int i=0; i<s.length(); i++){
        hashh[s[i]]++;
    }
    return hashh[num];
}

int main(){
    string s="abcdabcda";
    char ch;
    cout<<"Enter char to check frequency ";
    cin>>ch;
    int resultHash= freqOfNoHash(s, ch);
    int resultArray= freqOfNoArray(s, ch);
    cout<<"Frequency using Hash is: "<<resultHash<<endl;
    cout<<"Frequency using Array is: "<<resultArray;
    return 0;
}