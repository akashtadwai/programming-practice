// https://leetcode.com/problems/time-needed-to-inform-all-employees/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> g;
  void dfs(int i, vector<int> &informTime, int cur, int &res) {
    cur = cur + informTime[i];
    res = max(res, cur);
    for (auto v : g[i]) {
      dfs(v, informTime, cur, res);
    }
  }
  int numOfMinutes(int n, int headID, vector<int> &manager,
                   vector<int> &informTime) {
    g.resize(n);
    for (int i = 0; i < n; i++) {
      if (manager[i] != -1)
        g[manager[i]].push_back(i); // directed tree
    }
    int cur = 0, res = 0;
    dfs(headID, informTime, cur, res);
    return res;
  }
};