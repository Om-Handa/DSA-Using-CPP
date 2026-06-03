#include<bits/stdc++.h>
using namespace std;

void pairSort(vector<pair<int, char>> &arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<pair<int,char>> arr={{5,'a'},{1,'b'},{1,'a'}};
    pairSort(arr);
    for(auto i: arr){
        cout<<i.first <<" "<<i.second<<endl;
    }
}