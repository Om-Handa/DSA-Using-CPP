#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int> arr){
    int cnt=0;
    int longest=0;
    unordered_set<int> st;

    for(int i=0; i<arr.size(); i++){
        st.insert(arr[i]);
    }

    for(auto it: st){
        if(st.find(it-1)==st.end()){
            cnt=1;
            int x=it;

            while(st.find(x+1)!=st.end()){
                cnt+=1;
                x+=1;
            }
            longest= max(longest, cnt);
        }
    }
    return longest;



}

int main(){
    vector<int> arr={100, 4, 200, 1, 3, 2};
    int res= longestConsecutive(arr);
    cout<<"Longest Consecutive Subsequence is: "<<res;
    return 0;
}
