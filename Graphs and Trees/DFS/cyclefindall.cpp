// https://leetcode.com/problems/find-eventual-safe-states/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  bool dfs(vector<vector<int>> &graph, int v, vector<int> &dp) {
    if (dp[v])
      return dp[v] == 1;
    dp[v] = -1;
    for (int u : graph[v])
      if (!dfs(graph, u, dp))
        return false;
    dp[v] = 1;
    return true;
  }

public:
  vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
    int V = graph.size();
    vector<int> res;
    vector<int> dp(V, 0);
    for (int i = 0; i < V; i++) {
      if (dfs(graph, i, dp))
        res.push_back(i);
    }
    return res;
  }
};