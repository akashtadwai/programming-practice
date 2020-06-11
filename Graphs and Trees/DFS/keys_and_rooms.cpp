// https://leetcode.com/problems/keys-and-rooms/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void dfs(int i, vector<bool>&vis,vector<vector<int>>& rooms){
        vis[i]=true;
        for(int v: rooms[i]){
            if(!vis[v]) dfs(v,vis,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        vis[0]=true;
        dfs(0,vis,rooms);
        for(int i=0;i<n;i++) if(!vis[i])    return false;
        return true;
    }
};