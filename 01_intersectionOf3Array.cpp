/*Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]
Output: [1,5]*/
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
vector<int> intersectionOfTwoArray(vector<int> arr1,vector<int> arr2){
    int i=0;
    int j=0;
    int len1=arr1.size();
    int len2=arr2.size();
    vector<int> temp1;

    while(i<len1 && j<len2){
        if(arr1[i]==arr2[j]){ temp1.push_back(arr1[i]);
        i++;
        j++;

        }
        else if(arr1[i]>arr2[j]) j++;
        else i++;
    }
     

    return temp1;
}

int main(){
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={1,2,5,7,9};
    vector<int> arr3={1,3,4,5,8};
    vector<int> temp1=intersectionOfTwoArray(arr1,arr2);
    // cout<<"printing temp1";
    // for(auto x: temp1) cout<<x<<" ";
    cout<<endl;
    vector<int> ans=intersectionOfTwoArray(arr3,temp1);

    cout<<"printing ans";

    for(auto x: ans) cout<<x<<" ";

    return 0;
}