#include<iostream>
#include<vector>
using namespace std;

vector<int> matrixSpiral(vector<vector<int>> arr){
    int top=0;
    int left=0;
    int bottom=arr.size()-1;
    int right=arr[0].size()-1;
    vector<int> res;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            res.push_back(arr[top][i]);
        }
        top++;

        for(int i=top; i<=bottom; i++){
            res.push_back(arr[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                res.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        if(left<= right){
            for(int i=bottom; i>=top; i--){
                res.push_back(arr[i][left]);
            }   
            left++;
        }

    }
    return res;
}

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> res=matrixSpiral(arr);
    for(int i: res){
        cout<<i<<" ";
    }
    return 0;
}