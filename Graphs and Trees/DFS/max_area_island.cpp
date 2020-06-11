// https://leetcode.com/problems/max-area-of-island/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m,n;
    int ans=0;
    bool isvalid(int i, int j){
        return(i>=0 and i<m and j>=0 and j<n);
    }
    vector<pair<int,int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
    int dfs(int i, int j,vector<vector<int>>& M){
        M[i][j]=0;
        int area=1;
        for(auto dir:directions){
            int x_next = dir.first+i;
            int y_next = dir.second+j;
            if(isvalid(x_next,y_next) and M[x_next][y_next]==1){
                area+=dfs(x_next,y_next,M);
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& M) {
        if(M.empty() or M[0].empty())   return 0;
          m=M.size(),n=M[0].size();
        int res=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                   res= max(res,dfs(i,j,M));
                }
            }
        }
        return res;
    }
};