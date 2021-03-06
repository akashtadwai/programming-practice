// https://leetcode.com/problems/as-far-from-land-as-possible/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxDistance(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();
    queue<pair<int, int>> q;
    vector<pair<int, int>> directions{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    vector<vector<int>> dis(n, vector<int>(m, 1e9));
    auto isvalid = [&](int r, int c) {
      return (r >= 0 and r < n and c >= 0 and c < m);
    };
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 1) {
          q.push({i, j});
          dis[i][j] = 0;
        }
      }
    }
    if (q.empty())
      return -1;
    while (!q.empty()) {
      int curx = q.front().first;
      int cury = q.front().second;
      q.pop();
      for (auto dir : directions) {
        int x_next = curx + dir.first;
        int y_next = cury + dir.second;
        if (isvalid(x_next, y_next)) {
          if (dis[x_next][y_next] > dis[curx][cury] + 1) {
            dis[x_next][y_next] = dis[curx][cury] + 1;
            q.push({x_next, y_next});
          }
        }
      }
    }
    int ans = 0;
    for (auto x : dis)
      for (auto y : x)
        ans = max(ans, y);
    return ans == 0 ? -1 : ans;
  }
};