https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/
class Solution {
public:
map<int,int>par,size;
void make_set(int v) {
  par[v] = v;
  size[v] = 1;
}
int find_set(int u) {
  if (par[u] == u)
    return u;
  return par[u] = find_set(par[u]);
}
void union_sets(int a, int b) {
   a = find_set(a);
   b = find_set(b);
  if (a != b) {
    if (size[a] < size[b])
      swap(a, b);
    par[b] = a;
    size[a] += size[b];
  }
}
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        for(int i=0;i<n;i++){
            make_set(stones[i][0]);
            make_set(stones[i][1]);
        }
    for(int i=0;i<n;i++){
        union_sets(stones[i][0],stones[i][1]);
    }
        int mx=1;
        for(auto pp:size)   mx=max(mx,pp.second);
        return mx;

    }
};
