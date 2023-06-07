#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int k=n;
        int i=0;
        while(k<nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[k]);
            i++;
            k++;
        }
        return ans;
    }

int main(){
    vector<int> nums={2,5,1,3,4,7};
    int n=3;
    vector<int> ans=shuffle(nums,n);
    for(auto x: ans) cout<<x<<" ";
}