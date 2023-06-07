#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> ans(m,vector<int>(n,-1));
        for(int col=0;col<m;col++){
            for(int row=0;row<n;row++){
                ans[col][row]=matrix[row][col];
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> matrix={
        {1,2,3},{4,5,6},{7,8,9}
    };
    auto ans=transpose(matrix);

    for(auto x:ans){
        cout<<"["<<" ";
        for(auto y: x) cout<<y<<" ";
        cout<<"]";

    }

}