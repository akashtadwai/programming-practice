// https://leetcode.com/problems/rotting-oranges/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int orangesRotting(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();
    queue<pair<int, int>> q;
    int fresh = 0;
    vector<pair<int, int>> directions{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    auto isvalid = [&](int r, int c) {
      return (r >= 0 and r < n and c >= 0 and c < m);
    };
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 2) {
          q.push({i, j});

        } else if (matrix[i][j] == 1)
          fresh++;
      }
    }
    if (fresh == 0)
      return 0;
    int time = 0;
    while (!q.empty()) {
      time++;
      int size = q.size();
      for (int i = 0; i < size; i++) {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();
        for (auto dir : directions) {
          int x_next = curx + dir.first;
          int y_next = cury + dir.second;
          if (isvalid(x_next, y_next) and matrix[x_next][y_next] == 1) {
            matrix[x_next][y_next] = 2;
            --fresh;
            if (fresh == 0)
              return time;
            q.push({x_next, y_next});
          }
        }
      }
    }
    return -1;
  }
};
