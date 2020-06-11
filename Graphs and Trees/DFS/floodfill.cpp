// https://leetcode.com/problems/flood-fill/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int m, n;
  vector<pair<int, int>> directions{{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
  bool isvalid(int i, int j) { return (i >= 0 and i < m and j >= 0 and j < n); }
  void dfs(vector<vector<int>> &image, int sr, int sc, int newColor, int old,
           vector<vector<bool>> &vis) {
    vis[sr][sc] = true;
    image[sr][sc] = newColor;
    for (auto pp : directions) {
      int nro = pp.first + sr;
      int ncol = pp.second + sc;
      if (isvalid(nro, ncol) and image[nro][ncol] == old and
          vis[nro][ncol] == false) {
        dfs(image, nro, ncol, newColor, old, vis);
      }
    }
  }
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int newColor) {
    m = image.size(), n = image[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    int old = image[sr][sc];
    if (image[sr][sc] != newColor) {
      dfs(image, sr, sc, newColor, old, vis);
    }
    return image;
  }
};