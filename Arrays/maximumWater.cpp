#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=0;

        while (i<j){
            int currarea=(j-i)*min(height[i], height[j]);
            area=max(area, currarea);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }   
        return area;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum water height is: "<<maxArea(height);
    return 0;
}