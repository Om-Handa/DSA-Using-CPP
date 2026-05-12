#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

void highestFreq(unordered_map<int, int>& hashh){
    int maxf=0;
    pair<int, int> pr={0,maxf};
    for(auto it : hashh){
        if(it.second>maxf){
            pr.second= it.second;
            pr.first= it.first;
            maxf=it.second;
        }
    }
    cout<<"Highest Frequency is of Element- "<<pr.first<<"->"<<pr.second<<endl;
}

void lowestFreq(unordered_map<int, int>& hashh){
    int minf=INT_MAX;
    pair<int, int> pr={0,minf};
    for(auto it : hashh){
        if(it.second<minf){
            pr.second= it.second;
            pr.first= it.first;
            minf=it.second;
        }
    }
    cout<<"Lowest Frequency is of Element- "<<pr.first<<"->"<<pr.second;
}

void hashCreate(vector<int>& arr){
    unordered_map<int , int> hashh;
    for(int i=0; i<arr.size(); i++){
        hashh[arr[i]]++;
    }
    highestFreq(hashh);
    lowestFreq(hashh);
}

void Frequency(vector<int>& arr, int n){
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++){
        map[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    for (auto it : map) {
        int element = it.first;
        int count = it.second;

        if (count > maxFreq) {
            maxFreq = count;
            maxEle = element;
        }

        if (count < minFreq) {
            minFreq = count;
            minEle = element;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
    }

int main(){
    vector<int> arr={1,2,3,2,1,2,2,2,4};
    hashCreate(arr);
    return 0;
}