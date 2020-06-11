https://leetcode.com/problems/number-of-operations-to-make-network-connected/
class Solution {
public:
vector<int>par,size;
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
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size();
        par.resize(n);
        size.resize(n);
        if(n-m>1)   return -1;
        for(int i=0;i<n;i++)    make_set(i);
        for(int i=0;i<m;i++){
            union_sets(connections[i][0],connections[i][1]);
        }
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(find_set(i));
        }
        return st.size()-1;
    }
};
