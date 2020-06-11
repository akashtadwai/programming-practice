// https://leetcode.com/problems/number-of-islands/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m,n;
    bool isvalid(int i, int j){
        return(i>=0 and i<m and j>=0 and j<n);
    }
    vector<pair<int,int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
    void dfs(int i, int j,vector<vector<char>>& M){
        for(auto dir:directions){
            int x_next = dir.first+i;
            int y_next = dir.second+j;
            if(isvalid(x_next,y_next) and M[x_next][y_next]=='1'){
                M[x_next][y_next]='0';
                dfs(x_next,y_next,M);
            }
        }
    }
    int numIslands(vector<vector<char>>& M) {
        if(M.empty() or M[0].empty())   return 0;
          m=M.size(),n=M[0].size();
        int res=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                if(M[i][j]=='1'){
                    res++;
                    M[i][j]='0';
                    dfs(i,j,M);
                }
            }
        }
        return res;
    }
};