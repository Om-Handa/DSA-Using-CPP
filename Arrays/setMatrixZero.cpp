#include<iostream>
#include<vector>
using namespace std;

//TC= O(m*n) SC=O(m+n)
void setMatrixZeroMOne(vector<vector<int>> &arr){
    int m=arr.size();
    int n=arr[0].size();

    vector<int> rowZero(m, 0);
    vector<int> colZero(n, 0);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==0){
                rowZero[i]=1;
                colZero[j]=1;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(rowZero[i]==1 || colZero[j]==1){
                arr[i][j]=0;
            }
        }
    }

}

void setMatrixZeroMTwo(vector<vector<int>> &arr){
    int m=arr.size();
    int n=arr[0].size();
    bool firstRowZero =false;
    bool firstColZero =false;

    for(int j=0; j<n; j++){
        if(arr[0][j]==0){
            firstRowZero=true;
            break;
        }
    }

    for(int i=0; i<m; i++){
        if(arr[i][0]==0){
            firstColZero=true;
            break;  
        }
    }

    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][j]==0){
                arr[0][j]=0;
                arr[i][0]=0;
            }
        }
    }

    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][0]==0||arr[0][j]==0){
                arr[i][j]=0;
            }
        }
    }
    
    if(firstRowZero){
        for(int j=0; j<n; j++){
            arr[0][j]=0;
        }
    }

    if(firstColZero){
        for(int i=0; i<m; i++){
            arr[i][0]=0;
        }
    }
}

int main(){
    vector<vector<int>> arr={{0,1,2,0}, {3,4,5,6}, {7,8,9,1}};
    
    cout<<"Matrix Before Setting Zero"<<endl;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    setMatrixZeroMTwo(arr);
    cout<<"Matrix After Setting Zero"<<endl;
    for(auto row: arr){
        for(int i: row){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}