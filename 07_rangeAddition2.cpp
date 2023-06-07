#include<bits/stdc++.h>
using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minix=m;
        int miniy=n;
       // if(ops.size()==0) return m*n;

        for(auto &x: ops){
            minix=min(x[0],minix);
            miniy=min(x[1],miniy);
        }

        return minix*miniy;
    }
int main(){
    int m=3;
    int n=3;
    vector<vector<int>> ops={{2,2},{3,3}};
    cout<<maxCount(m,n,ops);

}