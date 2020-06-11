// https://leetcode.com/problems/number-of-enclaves/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int n, m;
  vector<pair<int, int>> directions{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
  bool isvalid(int i, int j) { return (i >= 0 and i < n and j >= 0 and j < m); }
  void dfs(int i, int j, vector<vector<int>> &A) {
    A[i][j] = -1;
    for (auto dir : directions) {
      int x_next = i + dir.first;
      int y_next = j + dir.second;
      if (isvalid(x_next, y_next) and A[x_next][y_next] == 1)
        dfs(x_next, y_next, A);
    }
  }
  int numEnclaves(vector<vector<int>> &A) {
    n = A.size(), m = A[0].size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if ((i == 0 or i == n - 1 or j == 0 or j == m - 1) and A[i][j] == 1) {
          dfs(i, j, A);
        }
      }
    }
    int ans = 0;
    for (auto x : A) {
      for (auto y : x)
        if (y == 1)
          ans++;
    }
    return ans;
  }
};