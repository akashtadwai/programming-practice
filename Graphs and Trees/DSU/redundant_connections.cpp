https://leetcode.com/problems/redundant-connection/
class Solution {
public:
vector<int> par, size;
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
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        par.resize(n+1);
        size.resize(n+1);
        for(int i=1;i<=n;i++)    make_set(i);
        vector<int>res;
        for(int i=0;i<n;i++){
            int k = find_set(edges[i][0]);
            int r =find_set(edges[i][1]);
            if(k==r){
                res.push_back(edges[i][0]),res.push_back(edges[i][1]);
                break;
            }
            union_sets(edges[i][0],edges[i][1]);
        }
        return res;
    }
};
