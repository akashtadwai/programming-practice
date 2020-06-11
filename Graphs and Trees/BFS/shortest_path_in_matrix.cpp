// https://leetcode.com/problems/shortest-path-in-binary-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1)   return matrix[0][0]==0;
        if(matrix[0][0]==1)    return -1;
    vector<pair<int, int>> directions{{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
    vector<vector<int> > dis(n, vector<int>(n, 1e9)), vis(n, vector<int>(n, 0));
    auto isvalid = [&] (int r, int c) { return (r >= 0 and r < n and c >= 0 and c < n); };
  queue<pair<int, int>> q;
  dis[0][0] = 1;
  q.push({0, 0});
  vis[0][0] = 1;
  while (!q.empty()) {
    pair<int, int> tp = q.front();
    q.pop();
    int curx = tp.first;
    int cury = tp.second;
    if (curx == n-1 and cury == n-1)
      return dis[n-1][n-1];
    for (auto dir : directions) {
      int x_next = dir.first + tp.first;
      int y_next = dir.second + tp.second;
      if (isvalid(x_next, y_next) and !vis[x_next][y_next] and matrix[x_next][y_next]==0) {
        vis[x_next][y_next] = 1;
        dis[x_next][y_next] = dis[curx][cury] + 1;
        q.push({x_next, y_next});
      }
    }
  }   
        return -1;
    }
};